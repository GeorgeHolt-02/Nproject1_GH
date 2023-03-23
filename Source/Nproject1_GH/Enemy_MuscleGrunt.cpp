// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_MuscleGrunt.h"
#include "ComponentUtils.h"
#include "MyGameInstance.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "PlayerChar.h"

AEnemy_MuscleGrunt::AEnemy_MuscleGrunt()
{
	SetRootComponent(EnemyCollider);
	
	EnemyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EnemyMesh"));
	EnemyMesh->SetupAttachment(RootComponent);

	Health_Max = 10.0f;

	MovementSpeed = 50.0f;

	Gravity = 10.0f;

	ForwardVector = FVector(0.0f, 0.0f, 0.0f);
	RightVector = FVector(0.0f, 0.0f, 0.0f);
	UpVector = FVector(0.0f, 0.0f, 0.0f);

	TerminalFallSpeed = 1000.0f;

	OriginalZSpeed = 0.0f;

	bPositioningSweep = false;

	YawRotator = FRotator(0.0f, 0.0f, 0.0f);
	Direction = FVector(0.0f, 0.0f, 0.0f);
}

void AEnemy_MuscleGrunt::BeginPlay()
{
	Super::BeginPlay();

	if(GetGameInstance())
	{
		CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	}
	
	EnemyCollider->OnComponentHit.AddDynamic(this, &AEnemy_MuscleGrunt::OnHit);
}

void AEnemy_MuscleGrunt::StartInvulnPeriod()
{
	EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel9);
	EnemyMesh->SetVisibility(false);
	InvulnTime_Current = InvulnTime_Max;
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
	
}

void AEnemy_MuscleGrunt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	OriginalZSpeed = UpVector.Z;
	
	EnemyGravity(DeltaTime);
	
	FallSpeedCap();
	
	GroundCollision(DeltaTime);
	CeilingCollision(DeltaTime);

	FallDeath();
}

void AEnemy_MuscleGrunt::InvulnPeriod(float DeltaTime)
{
	if (InvulnTime_Current > 0.0f)
	{
		if (FlashTime_Current <= 0.0f)
		{
			FlashTime_Current = FlashTime_Max;
			bShouldFlash = true;
		}
		InvulnTime_Current -= DeltaTime;
		
		if(InvulnTime_Current <= 0.0f)
		{
			bStopFlashing = true;
		}
	}
	else
	{
		if(EnemyCollider->GetCollisionObjectType() != ECC_GameTraceChannel7)
		{
			EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel7);
		}
		if(bStopFlashing)
		{
			if (!EnemyMesh->IsVisible())
			{
				EnemyMesh->SetVisibility(true);
			}
			bShouldFlash = false;
			bStopFlashing = false;
		}
	}
}

void AEnemy_MuscleGrunt::VisibilityFlashing(float DeltaTime)
{
	if (FlashTime_Current > 0.0f)
	{
		FlashTime_Current -= DeltaTime;
		
		if (FlashTime_Current <= 0.0f)
		{
			if(bShouldFlash)
			{
				EnemyMesh->SetVisibility(!EnemyMesh->IsVisible());
				bShouldFlash = false;
			}
		}
	}
}

void AEnemy_MuscleGrunt::MainBehaviour(float DeltaTime)
{
	if(Player)
	{
		SetActorRotation(FRotator(
			GetActorRotation().Pitch,
			UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Player->GetActorLocation()).Yaw,
			GetActorRotation().Roll
		));	
	}

	FHitResult GroundCheckHit;

	bool GroundCheck = GetWorld()->LineTraceSingleByChannel(GroundCheckHit, GetActorLocation(),
		GetActorLocation() + FVector(FVector(Direction * MovementSpeed).X, FVector(Direction * MovementSpeed).Y, -(EnemyCollider->GetScaledBoxExtent().Z * 2)),
		ECC_GameTraceChannel1, FCollisionQueryParams::DefaultQueryParam, FCollisionResponseParams::DefaultResponseParam);
	// DrawDebugLine(GetWorld(), GetActorLocation(),GetActorLocation() + FVector(FVector(Direction * MovementSpeed).X, FVector(Direction * MovementSpeed).Y,
	// 	-(EnemyCollider->GetScaledBoxExtent().Z * 2)), FColor::Yellow, false, -1, 0, 1.0f);

	if(!GroundCheck)
	{
		SetActorRotation(FRotator(
			GetActorRotation().Pitch,
			(GetActorRotation().Yaw - 180.0f),
			GetActorRotation().Roll
		));
	}
	YawRotator = FRotator(0.0f, GetActorRotation().Yaw, 0.0f);
	Direction = FRotationMatrix(YawRotator).GetUnitAxis(EAxis::X);

	FHitResult* CollisionCheck = new FHitResult;
	
	bool Move = SetActorLocation((GetActorLocation() + (Direction * DeltaTime * MovementSpeed)), true, CollisionCheck);

	if(Player)
	{
		SetActorRotation(FRotator(
			GetActorRotation().Pitch,
			UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Player->GetActorLocation()).Yaw,
			GetActorRotation().Roll
		));	
	}

	if(CollisionCheck->bStartPenetrating)
	{
		SetActorLocation(GetActorLocation() + CollisionCheck->ImpactNormal);
		UpVector = FVector(0.0f, 0.0f, (OriginalZSpeed - (FMath::Square(Gravity) * DeltaTime)));
		SetActorLocation((GetActorLocation() + (UpVector * DeltaTime)), true);
		//DrawDebugLine(GetWorld(), HitResult.ImpactPoint, HitResult.ImpactPoint + (HitResult.ImpactNormal * 100.0f), FColor::Green, false, 0.016667f, 0, 1);
	}

	if(CollisionCheck->Component != nullptr)
	{
		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		if(CollisionCheck->Component->GetAttachmentRootActor() != Cast<ABaseEnemy>(CollisionCheck->Component->GetAttachmentRootActor()))
		{
			AttachToComponent(Cast<USceneComponent>(CollisionCheck->Component), FAttachmentTransformRules::KeepWorldTransform);
		}
	}
	
	delete CollisionCheck;
}

void AEnemy_MuscleGrunt::DamageFunction(float Damage)
{
	Health_Current -= Damage;
	if(Player)
	{
		Player->MeterDecrementPauseTime = FlashTime_Max;
	}
	if (Health_Current <= 0.0f)
	{
		Death();
	}
	EnemyMesh->SetVisibility(false);
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AEnemy_MuscleGrunt::EnemyGravity(float DeltaTime)
{
	UpVector -= FVector(0.0f, 0.0f, (FMath::Square(Gravity)) * DeltaTime);

	FHitResult* CollisionCheck = new FHitResult;
	
	bool Move = SetActorLocation((GetActorLocation() + (UpVector * DeltaTime)), true, CollisionCheck);

	if(CollisionCheck->bStartPenetrating)
	{
		SetActorLocation(GetActorLocation() + CollisionCheck->ImpactNormal);
		UpVector = FVector(0.0f, 0.0f, (OriginalZSpeed - (FMath::Square(Gravity) * DeltaTime)));
		SetActorLocation((GetActorLocation() + (UpVector * DeltaTime)), true);
		//DrawDebugLine(GetWorld(), HitResult.ImpactPoint, HitResult.ImpactPoint + (HitResult.ImpactNormal * 100.0f), FColor::Green, false, 0.016667f, 0, 1);
	}

	if(CollisionCheck->Component != nullptr)
	{
		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		if(CollisionCheck->Component->GetAttachmentRootActor() != Cast<ABaseEnemy>(CollisionCheck->Component->GetAttachmentRootActor()))
		{
			AttachToComponent(Cast<USceneComponent>(CollisionCheck->Component), FAttachmentTransformRules::KeepWorldTransform);
		}
	}
	
	delete CollisionCheck;
}

void AEnemy_MuscleGrunt::GroundCollision(float DeltaTime)
{
	FVector OriginalPosition = GetActorLocation();

	bPositioningSweep = true;
	
	bool GroundCheck = SetActorLocation((GetActorLocation() - FVector(0.0f, 0.0f, (((UpVector.Z * DeltaTime) * -1) + Gravity))), true);
	
	if (GroundCheck == true)
	{
		//Anim_bInAir = true;
		SetActorLocation(OriginalPosition);
	}
	else
	{
		UpVector = FVector(0.0f, 0.0f, 0.0f);
		//Anim_bInAir = false;
		SetActorLocation(OriginalPosition);
	}

	bPositioningSweep = false;
}

void AEnemy_MuscleGrunt::CeilingCollision(float DeltaTime)
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
		UpVector = FVector(0.0f, 0.0f, 0.0f);
		SetActorLocation(OriginalPosition);
	}

	bPositioningSweep = false;
}

void AEnemy_MuscleGrunt::FallSpeedCap()
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

void AEnemy_MuscleGrunt::FallDeath()
{
	if(GetActorLocation().Z > 5000.0f)
	{
		if(CurrentGameInstance)
		{
			CurrentGameInstance->EnemyNum--;
			UE_LOG(LogTemp, Warning, TEXT("Enemy Num2: %i"), CurrentGameInstance->EnemyNum);
		}
		Destroy();
	}
	if(GetActorLocation().Z < -5000.0f)
	{
		if(CurrentGameInstance)
		{
			CurrentGameInstance->EnemyNum--;
			UE_LOG(LogTemp, Warning, TEXT("Enemy Num2: %i"), CurrentGameInstance->EnemyNum);
		}
		Destroy();
	}
}

void AEnemy_MuscleGrunt::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                               FVector NormalImpulse, const FHitResult& HitResult)
{
	// if(!bPositioningSweep)
	// {
	// 	// if(HitResult.bStartPenetrating)
	// 	// {
	// 	// 	SetActorLocation(GetActorLocation() + HitResult.ImpactNormal);
	// 	// 	UpVector = FVector(0.0f, 0.0f, (OriginalZSpeed - (FMath::Square(Gravity) * GetWorld()->GetDeltaSeconds())));
	// 	// 	SetActorLocation((GetActorLocation() + (UpVector * GetWorld()->GetDeltaSeconds())), true);
	// 	// 	//DrawDebugLine(GetWorld(), HitResult.ImpactPoint, HitResult.ImpactPoint + (HitResult.ImpactNormal * 100.0f), FColor::Green, false, 0.016667f, 0, 1);
	// 	// }
	//
	// 	// if(OtherComp)
	// 	// {
	// 	// 	AttachToComponent(OtherComp, FAttachmentTransformRules::KeepWorldTransform);
	// 	// }
	// }
}

void AEnemy_MuscleGrunt::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor)
	{
		APlayerChar* MyPlayer = Cast<APlayerChar>(OtherActor);
		if(MyPlayer)
		{
			if(bKillOnContact)
			{
				if((!MyPlayer->bPositioningSweep) && (!bPositioningSweep))
				{
					if(CurrentGameInstance)
					{
						CurrentGameInstance->EnemyNum = 0;
						CurrentGameInstance->bCanLoadNextLevel = true;
					}
					MyPlayer->Destroy();
				}
			}
		}
		else
		{
			APlayerShot* MyShot = Cast<APlayerShot>(OtherActor);
			if(MyShot)
			{
				DamageFunction(MyShot->Damage);
			}
		}
	}
}
