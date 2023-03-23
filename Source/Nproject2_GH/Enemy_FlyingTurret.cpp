// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_FlyingTurret.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "PlayerChar.h"

AEnemy_FlyingTurret::AEnemy_FlyingTurret()
{
	SetRootComponent(EnemyCollider);

	EnemyBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyBaseMesh"));
	EnemyBaseMesh->SetupAttachment(RootComponent);
	EnemyCannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyCannonMesh"));
	EnemyCannonMesh->SetupAttachment(EnemyBaseMesh);
	
	ShotTransform = CreateDefaultSubobject<USceneComponent>(TEXT("ShotTransform"));
	ShotTransform->SetupAttachment(EnemyCannonMesh);

	Health_Max = 1.0f;

	MovementSpeed_Horizontal = 500.0f;
	MovementSpeed_Vertical = -250.0f;
	
	MaxProjTravelDistance = 500.0f;

	ShotTag = *FString(this->GetName() + "Shot");

	bCanShoot = false;
	
	YawRotator = FRotator(0.0f, 0.0f, 0.0f);
	Direction = FVector(0.0f, 0.0f, 0.0f);

	TurretInterval = 0.5f;
	TurretInterval_TimeLeft = TurretInterval;
}

void AEnemy_FlyingTurret::BeginPlay()
{
	Super::BeginPlay();
	
	TurretInterval_TimeLeft = TurretInterval;
}

void AEnemy_FlyingTurret::StartInvulnPeriod()
{
	Super::StartInvulnPeriod();

	EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel9);
	bCanShoot = false;
	EnemyBaseMesh->SetVisibility(false);
	EnemyCannonMesh->SetVisibility(false);
	InvulnTime_Current = InvulnTime_Max;
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AEnemy_FlyingTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ShotCleanup();
}

void AEnemy_FlyingTurret::InvulnPeriod(float DeltaTime)
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
			if (!EnemyBaseMesh->IsVisible())
			{
				EnemyBaseMesh->SetVisibility(true);
			}
			if (!EnemyCannonMesh->IsVisible())
			{
				EnemyCannonMesh->SetVisibility(true);
			}
			if (MovementSpeed_Vertical < 0.0f)
			{
				Shoot();
			}
			bShouldFlash = false;
			bStopFlashing = false;
		}
	}
}

void AEnemy_FlyingTurret::VisibilityFlashing(float DeltaTime)
{
	if (FlashTime_Current > 0.0f)
	{
		FlashTime_Current -= DeltaTime;
		
		if (FlashTime_Current <= 0.0f)
		{
			if(bShouldFlash)
			{
				EnemyBaseMesh->SetVisibility(!EnemyBaseMesh->IsVisible());
				EnemyCannonMesh->SetVisibility(!EnemyCannonMesh->IsVisible());
				bShouldFlash = false;
			}
		}
	}
}

void AEnemy_FlyingTurret::MainBehaviour(float DeltaTime)
{
	if(Player)
	{
		SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Player->GetActorLocation()));
		if(TurretInterval_TimeLeft > 0.0f)
		{
			TurretInterval_TimeLeft -= DeltaTime;
			
			if (TurretInterval_TimeLeft <= 0.0f)
			{
				if((InvulnTime_Current <= 0.0f) && (!bCanShoot))
				{
					bCanShoot = true;
				}
				if (MovementSpeed_Vertical < 0.0f)
				{
					Shoot();
				}
				YawRotator = FRotator(0.0f, GetActorRotation().Yaw, 0.0f);
				Direction = FRotationMatrix(YawRotator).GetUnitAxis(EAxis::X);
				MovementSpeed_Vertical *= -1;
				TurretInterval_TimeLeft = TurretInterval;
			}
		}
	}

	SetActorLocation((GetActorLocation() + (Direction * DeltaTime * MovementSpeed_Horizontal)), true);
	SetActorLocation((GetActorLocation() + (FVector(0.0f, 0.0f, (DeltaTime * MovementSpeed_Vertical)))), true);
}

void AEnemy_FlyingTurret::DamageFunction(float Damage)
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
	EnemyBaseMesh->SetVisibility(false);
	EnemyCannonMesh->SetVisibility(false);
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}

void AEnemy_FlyingTurret::Shoot()
{
	const FRotator ShotRotation = ShotTransform->GetComponentRotation();
	const FVector ShotLocation = ShotTransform->GetComponentLocation();

	if (bCanShoot)
	{
		if (ShotBP)
		{
			const FActorSpawnParameters SpawnParams;

			AEnemyProjectile_FlyingTurret* ShotProjectile = (GetWorld()->SpawnActor<AEnemyProjectile_FlyingTurret>(ShotBP, ShotLocation, ShotRotation, SpawnParams));
			ShotProjectile->Tags.Add(ShotTag);
		}
	}
}

void AEnemy_FlyingTurret::ShotCleanup()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ShotBP, FoundShots);

	for(const auto& Shot : FoundShots)
	{
		if(Shot->ActorHasTag(ShotTag))
		{
			if(FVector::Dist(GetActorLocation(), Shot->GetActorLocation()) > MaxProjTravelDistance)
			{
				Shot->Destroy();
			}
		}
	}
}