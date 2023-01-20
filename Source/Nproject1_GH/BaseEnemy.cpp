// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"

#include "PlayerChar.h"
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

	Health_Max = 3.0f;
	Health_Current = Health_Max;

	bKillOnContact = true;

	InvulnTime_Max = 3.0f;
	InvulnTime_Current = InvulnTime_Max;

	FlashTime_Max = 0.041667f;
	FlashTime_Current = 0.0f;

	bStopFlashing = false;
	bShouldFlash = true;
}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();

	EnemyCollider->OnComponentBeginOverlap.AddDynamic(this, &ABaseEnemy::OnOverlapStart);

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
		if(EnemyCollider->GetCollisionObjectType() != ECC_GameTraceChannel8)
		{
			EnemyCollider->SetCollisionObjectType(ECC_GameTraceChannel8);
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
	//insert any code that is meant to occur before destroy here
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

