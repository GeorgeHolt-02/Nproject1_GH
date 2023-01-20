// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_MuscleGrunt.h"
#include "Components/BoxComponent.h"

AEnemy_MuscleGrunt::AEnemy_MuscleGrunt()
{
	EnemyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EnemyMesh"));
	EnemyMesh->SetupAttachment(RootComponent);

	Health_Max = 10.0f;

	MovementSpeed = 50.0f;

	RotationRate = 720.0f;

	Gravity = 10.0f;

	TerminalFallSpeed = 1000.0f;

	bPositioningSweep = false;
}

void AEnemy_MuscleGrunt::BeginPlay()
{
	Super::BeginPlay();
	
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
		if(EnemyCollider->GetCollisionObjectType() != ECC_GameTraceChannel8)
		{
			EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel8);
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
	
}

void AEnemy_MuscleGrunt::DamageFunction(float Damage)
{
	Health_Current -= Damage;
	if (Health_Current <= 0.0f)
	{
		Death();
	}
	EnemyMesh->SetVisibility(false);
	FlashTime_Current = FlashTime_Max;
	bShouldFlash = true;
}
