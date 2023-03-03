// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"

#include "MyGameInstance.h"
#include "PlayerChar.h"
#include "Widget_PlayerHUD.h"
#include "Components/BoxComponent.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnemyCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("EnemyCollider"));
	SetRootComponent(EnemyCollider);
	EnemyCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel9);

	PointsToAward = 50;
	
	Health_Max = 3.0f;
	Health_Current = Health_Max;

	bKillOnContact = true;

	InvulnTime_Max = 3.0f;
	InvulnTime_Current = InvulnTime_Max;

	FlashTime_Max = 0.041667f;
	FlashTime_Current = 0.0f;

	bStopFlashing = false;
	bShouldFlash = true;

	Player = nullptr;
	CurrentGameInstance = nullptr;
}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();

	if(GetGameInstance())
	{
		CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	}
	
	EnemyCollider->OnComponentBeginOverlap.AddDynamic(this, &ABaseEnemy::OnOverlapStart);
	OnDestroyed.AddDynamic(this, &ABaseEnemy::OnDeath);

	if (GetWorld()->GetFirstPlayerController()->GetPawn() != nullptr)
	{
		Player = Cast<APlayerChar>(GetWorld()->GetFirstPlayerController()->GetPawn());
	}

	Health_Current = Health_Max;
	
	StartInvulnPeriod();
	
}

void ABaseEnemy::StartInvulnPeriod()
{
	EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel9);
	EnemyCollider->SetHiddenInGame(true);
	InvulnTime_Current = InvulnTime_Max;
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EnableCollision();

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	
	VisibilityFlashing(DeltaTime);
	InvulnPeriod(DeltaTime);

	MainBehaviour(DeltaTime);
}

void ABaseEnemy::EnableCollision()
{
	if (EnemyCollider->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		EnemyCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void ABaseEnemy::InvulnPeriod(float DeltaTime)
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
			if (EnemyCollider->bHiddenInGame)
			{
				EnemyCollider->SetHiddenInGame(false);
			}
			bShouldFlash = false;
			bStopFlashing = false;
		}
	}
}

void ABaseEnemy::VisibilityFlashing(float DeltaTime)
{
	if (FlashTime_Current > 0.0f)
	{
		FlashTime_Current -= DeltaTime;
		
		if (FlashTime_Current <= 0.0f)
		{
			if(bShouldFlash)
			{
				EnemyCollider->SetHiddenInGame(!EnemyCollider->bHiddenInGame);
				bShouldFlash = false;
			}
		}
	}
}

void ABaseEnemy::MainBehaviour(float DeltaTime)
{
	
}

void ABaseEnemy::DamageFunction(float Damage)
{
	Health_Current -= Damage;
	if(Player)
	{
		Player->MeterDecrementPauseTime += FlashTime_Max;
	}
	if (Health_Current <= 0.0f)
	{
		Death();
	}
	EnemyCollider->SetHiddenInGame(true);
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void ABaseEnemy::Death()
{
	if(CurrentGameInstance)
	{
		if(Player)
		{
			CurrentGameInstance->PlayerScore += (PointsToAward * Player->ScoreMultiplier_Current);
		}
		
		CurrentGameInstance->AddXtraLives();
		
		if(Player)
		{
			Player->MultiplierMeter_Current += Player->MultiplierMeter_IncreaseBy;
			if (Player->MultiplierMeter_Current >= Player->MultiplierMeter_NeededForIncrease)
			{
				if(Player->ScoreMultiplier_Current < Player->ScoreMultiplier_Max)
				{
					float i;
					for(i = Player->MultiplierMeter_NeededForIncrease;
						i <= Player->MultiplierMeter_Current;
						i += Player->MultiplierMeter_NeededForIncrease)
					{
						Player->ScoreMultiplier_Current += Player->ScoreMultiplier_ChangeBy;
					}
					if(Player->ScoreMultiplier_Current >= Player->ScoreMultiplier_Max)
					{
						Player->ScoreMultiplier_Current = Player->ScoreMultiplier_Max;
						Player->MultiplierMeter_Current = Player->MultiplierMeter_NeededForIncrease;
					}
					else
					{
						Player->MultiplierMeter_Current -= (i - Player->MultiplierMeter_NeededForIncrease);
					}
				}
				else
				{
					Player->MultiplierMeter_Current = Player->MultiplierMeter_NeededForIncrease;
				}
			}
		}

		if(Player)
		{
			if(Player->PlayerHUD)
			{
				Player->PlayerHUD->SetHighScore(FMath::Max(CurrentGameInstance->PlayerScore, Player->HighScore));
				Player->PlayerHUD->SetPlayerScore(CurrentGameInstance->PlayerScore);
				Player->PlayerHUD->SetMultiplier(Player->ScoreMultiplier_Current);
				Player->PlayerHUD->SetMultiplierBuildUp(Player->MultiplierMeter_Current, Player->MultiplierMeter_NeededForIncrease);
				Player->PlayerHUD->SetLives(CurrentGameInstance->PlayerLives_Current);
				Player->PlayerHUD->SetMultiplierCanvasOpacity(Player->ScoreMultiplier_Current);
			}
		}
		CurrentGameInstance->EnemyNum--;
		
		UE_LOG(LogTemp, Warning, TEXT("Enemy Num2: %i"), CurrentGameInstance->EnemyNum);
	}
	Destroy();
}

void ABaseEnemy::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor)
	{
		APlayerChar* MyPlayer = Cast<APlayerChar>(OtherActor);
		if(MyPlayer)
		{
			if(bKillOnContact)
			{
				if(!MyPlayer->bPositioningSweep)
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

void ABaseEnemy::OnDeath(AActor* DestroyedActor)
{
	
}