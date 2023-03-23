// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemyProjectile.h"
#include "MyGameInstance.h"
#include "PlayerChar.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABaseEnemyProjectile::ABaseEnemyProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShotMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ShotMovement"));

	ShotMovement->InitialSpeed = 1000.0f;
	ShotMovement->MaxSpeed = 0.0f;
	ShotMovement->Velocity = FVector(1.0f, 0.0f, 0.0f);
	ShotMovement->bRotationFollowsVelocity = true;
	ShotMovement->ProjectileGravityScale = 0.0f;
	ShotMovement->SetPlaneConstraintNormal(FVector(0.0f, 0.0f, 0.0f));
	ShotMovement->bConstrainToPlane = false;

	CurrentGameInstance = nullptr;
}

// Called when the game starts or when spawned
void ABaseEnemyProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseEnemyProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(GetGameInstance())
	{
		CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	}
}

void ABaseEnemyProjectile::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor)
	{
		APlayerChar* MyPlayer = Cast<APlayerChar>(OtherActor);
		if(MyPlayer)
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
}

