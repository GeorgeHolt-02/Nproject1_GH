// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChar.h"

#include "MyGameInstance.h"
#include "Widget_GameOver.h"
#include "Widget_PlayerHUD.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerChar::APlayerChar()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the player collider
	PlayerCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerCollider"));

	RootComponent = PlayerCollider;
	
	// Create the base transform
	PlayerTransform = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerTransform"));
	PlayerTransform->SetupAttachment(RootComponent);

	ShotTransform = CreateDefaultSubobject<USceneComponent>(TEXT("ShotTransform"));
	ShotTransform->SetupAttachment(PlayerTransform);
	
	// Create the player mesh
	PlayerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PlayerMesh"));
	PlayerMesh->SetupAttachment(PlayerTransform);

	// Create the blaster mesh
	// const USkeletalMeshSocket* BlasterSocket = PlayerMesh->GetSocketByName("BlasterSocket");
	// if (BlasterSocket)
	// {
	// 	BlasterSocket->AttachActor(BlasterMesh, PlayerMesh);
	// }

	// Default camera turn rates
	BaseLookRightRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(PlayerTransform);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;

	// Create the camera that follows the player
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	PlayerCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	PlayerCamera->bUsePawnControlRotation = false;

	// Create the arrow that shows which direction the player is facing
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(PlayerTransform);
	Arrow->ArrowLength = 175.0f;
	Arrow->SetHiddenInGame(false);

	ForwardVector = FVector(0.0f, 0.0f, 0.0f);
	RightVector = FVector(0.0f, 0.0f, 0.0f);
	UpVector = FVector(0.0f, 0.0f, 0.0f);

	PitchVector = FVector(0.0f, 0.0f, 0.0f);
	PitchRotator = FRotator(0.0f, 0.0f, 0.0f);
	YawVector = FVector(0.0f, 0.0f, 0.0f);
	YawRotator = FRotator(0.0f, 0.0f, 0.0f);
	RollVector = FVector(0.0f, 0.0f, 0.0f);
	RollRotator = FRotator(0.0f, 0.0f, 0.0f);

	MovementSpeed = 5.0f;

	Gravity = 10.0f;

	TerminalFallSpeed = 1000.0f;

	OriginalZSpeed = 0.0f;

	JumpForce = 14.7f;

	bJustJumped = false;

	MaxJumps = 1;

	Jumps = 0;

	MaxProjTravelDistance = 500.0f;

	MaxShots = 3;

	ShotTag = *FString(this->GetName() + "Shot");

	MaxHealth = 30.0f;

	CurrentHealth = MaxHealth;

	MaxInvulnTime = 0.25f;

	InvulnTime = 0.0f;

	bPositioningSweep = false;

	HighScore = 0;

#pragma region ANIMATION VARIABLES

	Anim_MovementInput = FVector2D(0.0f, 0.0f);
	Anim_bHasFired = false;
	Anim_bHasJumped = false;
	Anim_bInAir = true;

#pragma endregion

	CurrentGameInstance = nullptr;

	ScoreMultiplier_Max = 2.0f;
	ScoreMultiplier_Current = 1.0f;
	ScoreMultiplier_ChangeBy = 0.2f;

	MultiplierMeter_NeededForIncrease = 6.0f;
	MultiplierMeter_Current = 0.0f;
	MultiplierMeter_IncreaseBy = 2.0f;

	MeterDecrementPauseTime = 0.0f;

	bResetMeter = false;
	
	MeterSpeedCoeff = 1.0f;
	
	PlayerHUDref = nullptr;
	PlayerHUD = nullptr;
}

// Called when the game starts or when spawned
void APlayerChar::BeginPlay()
{
	Super::BeginPlay();

	if(GetGameInstance())
	{
		CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	}

	if(CurrentGameInstance)
	{
		if(CurrentGameInstance->PlayerPB != NULL)
		{
			HighScore = CurrentGameInstance->PlayerPB;
		}
		else
		{
			HighScore = CurrentGameInstance->TopTenScores.Last().Score;
		}
	}
	
	if (BlasterMesh)
	{
		const FActorSpawnParameters BlasterSpawnParams;

		APlayerBlaster* Blaster = (GetWorld()->SpawnActor<APlayerBlaster>(BlasterMesh, FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f), BlasterSpawnParams));
	}
	
	OriginalZSpeed = UpVector.Z;
	
	PlayerCollider->OnComponentHit.AddDynamic(this, &APlayerChar::OnHit);
	OnDestroyed.AddDynamic(this, &APlayerChar::OnDeath);

	if(IsLocallyControlled() && PlayerHUDref)
	{
		APlayerController* Player_Controller = GetController<APlayerController>();
		check(Player_Controller);
		PlayerHUD = CreateWidget<UWidget_PlayerHUD>(Player_Controller, PlayerHUDref);
		check(PlayerHUD);
		PlayerHUD->AddToPlayerScreen();
	}
}

void APlayerChar::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if(PlayerHUD)
	{
		PlayerHUD->RemoveFromParent();
		PlayerHUD = nullptr;
	}
	
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void APlayerChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	OriginalZSpeed = UpVector.Z;
	
	//PlayerCollider->SetBoxExtent(PlayerMesh->Bounds.BoxExtent, false);
	
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	
	PlayerGroundMovement(DeltaTime);
	
	PlayerGravity(DeltaTime);
	
	PlayerFallSpeedCap();
	
	PlayerGroundCollision(DeltaTime);
	PlayerCeilingCollision(DeltaTime);

	ShotCleanup();
	
	PlayerDeath();

	UpdateInvulnTimer(DeltaTime);

	UpdateMultiplier(DeltaTime);
		
	// GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Green,
	// FString::Printf(TEXT("PLAYER HEALTH: %f/%f"), CurrentHealth, MaxHealth));

	// GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::White,
	// FString::Printf(TEXT("MULTIPLIER METER: %f/%f"), MultiplierMeter_Current, MultiplierMeter_NeededForIncrease));
	// GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::White,
	// FString::Printf(TEXT("SCORE MULTIPLIER: %f"), ScoreMultiplier_Current));
	//
	// if(CurrentGameInstance)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Green,
	// FString::Printf(TEXT("LIVES: %i"), CurrentGameInstance->PlayerLives_Current));
	// 	GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Yellow,
	// FString::Printf(TEXT("SCORE: %i"), CurrentGameInstance->PlayerScore));
	// 	GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Yellow,
	// FString::Printf(TEXT("HISCORE: %i"), FMath::Max(HighScore, CurrentGameInstance->PlayerScore)));
	// 	
	// 	// UE_LOG(LogTemp, Warning, TEXT("%i"), CurrentGameInstance->EnemyNum);
	// 	// if(CurrentGameInstance->bCanLoadNextLevel)
	// 	// {
	// 	// 	UE_LOG(LogTemp, Warning, TEXT("true"));
	// 	// }
	// 	// else
	// 	// {
	// 	// 	UE_LOG(LogTemp, Warning, TEXT("false"));
	// 	// }
	// }

	// if(bUpdateAnimBools)
	// {
	// 	if (Anim_bHasFired == true)
	// 	{
	// 		Anim_bHasFired = false;
	// 	}
	// 	if (Anim_bHasJumped == true)
	// 	{
	// 		Anim_bHasJumped = false;
	// 	}
	// 	bUpdateAnimBools = false;
	// }
}

// Called to bind functionality to input
void APlayerChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerChar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerChar::MoveRight);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerChar::Jump);
	PlayerInputComponent->BindAction("StopJumping", IE_Released, this, &APlayerChar::StopJumping);

	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &APlayerChar::Shoot);
	
	PlayerInputComponent->BindAxis("LookRight", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookRightAtRate", this, &APlayerChar::LookRightAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpAtRate", this, &APlayerChar::LookUpAtRate);
	
}

void APlayerChar::PlayerGroundMovement(float DeltaTime)
{
	SetActorLocation((GetActorLocation() + (ForwardVector * DeltaTime * MovementSpeed)), true);
	SetActorLocation((GetActorLocation() + (RightVector * DeltaTime * MovementSpeed)), true);
	
	PlayerTransform->SetRelativeRotation((PitchRotator + YawRotator + RollRotator) + FRotator(0.0f, -90.0f, 0.0f));
}

void APlayerChar::PlayerGroundCollision(float DeltaTime)
{
	FVector OriginalPosition = GetActorLocation();

	bPositioningSweep = true;
	
	bool GroundCheck = SetActorLocation((GetActorLocation() - FVector(0.0f, 0.0f, (((UpVector.Z * DeltaTime) * -1) + Gravity))), true);
	
	if (GroundCheck == true)
	{
		if (Jumps < 1)
		{
			Jumps = 1;
		}
		Anim_bInAir = true;
		SetActorLocation(OriginalPosition);
	}
	else
	{
		bJustJumped = false;
		Jumps = 0;
		UpVector = FVector(0.0f, 0.0f, 0.0f);
		Anim_bInAir = false;
		SetActorLocation(OriginalPosition);
	}

	bPositioningSweep = false;
}

void APlayerChar::PlayerCeilingCollision(float DeltaTime)
{
	FVector OriginalPosition = GetActorLocation();

	bPositioningSweep = true;
	
	bool CeilingCheck = SetActorLocation((GetActorLocation() + FVector(0.0f, 0.0f, ((UpVector.Z * DeltaTime) + Gravity))), true);
	
	if (CeilingCheck == true)
	{
		SetActorLocation(OriginalPosition);
	}
	else
	{
		bJustJumped = false;
		UpVector = FVector(0.0f, 0.0f, 0.0f);
		SetActorLocation(OriginalPosition);
	}

	bPositioningSweep = false;
}

void APlayerChar::PlayerFallSpeedCap()
{
	if (FMath::Sign(Gravity) >= 0.0f)
	{
		if (UpVector.Z < -(TerminalFallSpeed))
		{
			UpVector = FVector(0.0f, 0.0f, -(TerminalFallSpeed));
		}
	}
	else
	{
		if (UpVector.Z > TerminalFallSpeed)
		{
			UpVector = FVector(0.0f, 0.0f, TerminalFallSpeed);
		}
	}
}

void APlayerChar::PlayerGravity(float DeltaTime)
{
	UpVector -= FVector(0.0f, 0.0f, (FMath::Square(Gravity)) * DeltaTime);
	
	SetActorLocation((GetActorLocation() + (UpVector * DeltaTime)), true);
}

void APlayerChar::UpdateMultiplier(float DeltaTime)
{
	if(MeterDecrementPauseTime > 0.0f)
	{
		MeterDecrementPauseTime -= DeltaTime;
	}

	// if(bResetMeter)
	// {
	// 	if(MultiplierMeter_Current >= MultiplierMeter_NeededForIncrease)
	// 	{
	// 		
	// 		bResetMeter = false;
	// 	}
	// 	else if (MultiplierMeter_Current <= 0.0f)
	// 	{
	// 		
	// 		bResetMeter = false;
	// 	}
	// }
	
	if(MeterDecrementPauseTime <= 0.0f)
	{
		if (ScoreMultiplier_Current > 1.0f || MultiplierMeter_Current > 0.0f)
		{
			MultiplierMeter_Current -= (DeltaTime * MeterSpeedCoeff * ScoreMultiplier_Current);
			if(MultiplierMeter_Current <= 0.0f)
			{
				// if(ScoreMultiplier_Current > 1.0f)
				// {
				// 	ScoreMultiplier_Current = FMath::Clamp((ScoreMultiplier_Current - ScoreMultiplier_ChangeBy), 1.0f, ScoreMultiplier_Max);
				// 	if(ScoreMultiplier_Current < 1.0f)
				// 	{
				// 		MultiplierMeter_Current = 0.0f;
				// 	}
				// 	else
				// 	{
				// 		MultiplierMeter_Current += MultiplierMeter_NeededForIncrease;
				// 	}
				// }
				// else
				// {
				// 	MultiplierMeter_Current = 0.0f;
				// }
				if(ScoreMultiplier_Current > 1.0f)
				{
					ScoreMultiplier_Current = FMath::Clamp((ScoreMultiplier_Current - ScoreMultiplier_ChangeBy), 1.0f, ScoreMultiplier_Max);
					MultiplierMeter_Current += MultiplierMeter_NeededForIncrease;
				}
				else
				{
					MultiplierMeter_Current = 0.0f;
				}
			}
		}
	}

	if(PlayerHUD)
	{
		PlayerHUD->SetMultiplier(ScoreMultiplier_Current);
		PlayerHUD->SetMultiplierBuildUp(MultiplierMeter_Current, MultiplierMeter_NeededForIncrease);
		PlayerHUD->SetMultiplierCanvasOpacity(ScoreMultiplier_Current);
	}
}

void APlayerChar::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                        FVector NormalImpulse, const FHitResult& HitResult)
{
	if(!bPositioningSweep)
	{
		if(HitResult.bStartPenetrating)
		{
			SetActorLocation(GetActorLocation() + HitResult.ImpactNormal);
			UpVector = FVector(0.0f, 0.0f, (OriginalZSpeed - (FMath::Square(Gravity) * GetWorld()->GetDeltaSeconds())));
			SetActorLocation((GetActorLocation() + (UpVector * GetWorld()->GetDeltaSeconds())), true);
			//DrawDebugLine(GetWorld(), HitResult.ImpactPoint, HitResult.ImpactPoint + (HitResult.ImpactNormal * 100.0f), FColor::Green, false, 0.016667f, 0, 1);
		}
	
		if(OtherComp)
		{
			AttachToComponent(OtherComp, FAttachmentTransformRules::KeepWorldTransform);
		}
	}
}

void APlayerChar::OnDeath(AActor* DestroyedActor)
{
	if(CurrentGameInstance)
	{
		if(CurrentGameInstance->bCanLoadNextLevel)
		{
			if(CurrentGameInstance->PlayerLives_Current > 0)
			{
				CurrentGameInstance->PlayerLives_Current--;
				if (CurrentGameInstance->bCanRestart)
				{
					CurrentGameInstance->LoadSpecifiedLevelByName(FName(GetWorld()->GetCurrentLevel()->GetFullName()));
				}
			}
			else
			{
				if(CurrentGameInstance->PlayerScore > CurrentGameInstance->TopTenScores.Last().Score)
				{
					if(GameOverRef)
					{
						CurrentGameInstance->bCanRestart = false;
						UWidget_GameOver* GameOverWidget = CreateWidget<UWidget_GameOver>(GetWorld(), GameOverRef);
						GameOverWidget->AddToViewport(0);
						//UGameplayStatics::SetGamePaused(GetWorld(), true);
					}
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, FString::Printf(TEXT("GAME OVER!!")));

					CurrentGameInstance->PlayerScore = 0;
					CurrentGameInstance->ScoreSinceLastXtraLife = 0;
					CurrentGameInstance->ScoreForXtraLives = CurrentGameInstance->ScoreForFirstXtraLife;
					if(CurrentGameInstance->Levels.IsValidIndex(0))
					{
						CurrentGameInstance->LoadSpecifiedLevel(CurrentGameInstance->Levels[0]);
						CurrentGameInstance->NextLevelIndex = 1;
					}
					CurrentGameInstance->PlayerLives_Current = CurrentGameInstance->PlayerLives_Starting;
				}
			}
			CurrentGameInstance->bCanLoadNextLevel = false;
		}
		
		if(PlayerHUD)
		{
			PlayerHUD->SetPlayerScore(CurrentGameInstance->PlayerScore);
			PlayerHUD->SetLives(CurrentGameInstance->PlayerLives_Current);
		}
	}
	//UGameplayStatics::OpenLevel(GetWorld(), FName(GetWorld()->GetCurrentLevel()->GetFullName()), true);
}

void APlayerChar::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		ForwardVector += ((Direction * Value) - ForwardVector);
		YawVector += ((ForwardVector + RightVector) - YawVector);
		YawRotator = YawVector.Rotation();
		Anim_MovementInput.Y = Value;
	}
	else
	{
		ForwardVector += (FVector(0.0f, 0.0f, 0.0f) - ForwardVector);
		Anim_MovementInput.Y = 0.0f;
	}
}

void APlayerChar::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		RightVector += ((Direction * Value) - RightVector);
		YawVector += ((ForwardVector + RightVector) - YawVector);
		YawRotator = YawVector.Rotation();
		Anim_MovementInput.X = Value;
	}
	else
	{
		RightVector += (FVector(0.0f, 0.0f, 0.0f) - RightVector);
		Anim_MovementInput.X = 0.0f;
	}
}

void APlayerChar::Jump()
{
	if (Controller != nullptr)
	{
		if (Jumps < MaxJumps)
		{
			Anim_bHasJumped = true;
			UpVector = FVector(0.0f, 0.0f, (JumpForce * FMath::Sign(Gravity)));
			bJustJumped = true;
			Jumps++;
		}
	}
}

void APlayerChar::StopJumping()
{
	if (Controller != nullptr)
	{
		if (bJustJumped)
		{
			if(FMath::Sign(Gravity) >= 1)
			{
				if(UpVector.Z > 0.0f)
				{
					UpVector = FVector(0.0f, 0.0f, 0.0f);
					bJustJumped = false;
				}
			}
			else
			{
				if(UpVector.Z < 0.0f)
				{
					UpVector = FVector(0.0f, 0.0f, 0.0f);
					bJustJumped = false;
				}
			}
		}
	}
}

void APlayerChar::Shoot()
{
	if (Controller != nullptr)
	{
		const FRotator ShotRotation = ShotTransform->GetComponentRotation();
		const FVector ShotLocation = ShotTransform->GetComponentLocation();

		if (bCanShoot())
		{
			if (ShotBP)
			{
				Anim_bHasFired = true;
				const FActorSpawnParameters SpawnParams;

				APlayerShot* ShotProjectile = (GetWorld()->SpawnActor<APlayerShot>(ShotBP, ShotLocation, ShotRotation, SpawnParams));
				ShotProjectile->Player = this;
				ShotProjectile->Tags.Add(ShotTag);
			}
		}
	}
}

bool APlayerChar::bCanShoot()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ShotBP, FoundShots);

	int ShotNum = 0;

	for(const auto& Shot : FoundShots)
	{
		if(Shot->ActorHasTag(ShotTag))
		{
			ShotNum++;
		}
	}

	if (ShotNum >= MaxShots)
	{
		return false;
	}
	
	return true;
}

void APlayerChar::PlayerDeath()
{
	// if(CurrentHealth <= 0)
	// {
	// 	Destroy();
	// }
	if(GetActorLocation().Z > 5000.0f)
	{
		CurrentGameInstance->EnemyNum = 0;
		CurrentGameInstance->bCanLoadNextLevel = true;
		Destroy();
	}
	if(GetActorLocation().Z < -5000.0f)
	{
		CurrentGameInstance->EnemyNum = 0;
		CurrentGameInstance->bCanLoadNextLevel = true;
		Destroy();
	}
}

void APlayerChar::ShotCleanup()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ShotBP, FoundShots);

	for(const auto& Shot : FoundShots)
	{
		if(Shot->ActorHasTag(ShotTag))
		{
			if(FVector::Dist(GetActorLocation(), Shot->GetActorLocation()) > MaxProjTravelDistance)
			{
				Shot->Destroy();
				ScoreMultiplier_Current = 1.0f;
				MultiplierMeter_Current = 0.0f;
				if(PlayerHUD)
				{
					PlayerHUD->SetMultiplier(ScoreMultiplier_Current);
					PlayerHUD->SetMultiplierBuildUp(MultiplierMeter_Current, MultiplierMeter_NeededForIncrease);
					PlayerHUD->SetMultiplierCanvasOpacity(ScoreMultiplier_Current);
				}
			}
		}
	}
}

void APlayerChar::TakeHeavyDamage(float damage)
{
	if(InvulnTime <= 0)
	{
		CurrentHealth -= damage;
		InvulnTime = MaxInvulnTime;
	}
}

void APlayerChar::UpdateInvulnTimer(float deltaTime)
{
	if(InvulnTime > 0)
	{
		InvulnTime -= deltaTime;
	}
	else
	{
		InvulnTime = 0;
	}
}

void APlayerChar::LookRightAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseLookRightRate * GetWorld()->GetDeltaSeconds());
}

void APlayerChar::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
