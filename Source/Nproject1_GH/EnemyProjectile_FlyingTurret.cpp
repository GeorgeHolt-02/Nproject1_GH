// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile_FlyingTurret.h"
#include "MyGameInstance.h"

AEnemyProjectile_FlyingTurret::AEnemyProjectile_FlyingTurret()
{
	ShotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShotMesh"));
	SetRootComponent(ShotMesh);
	ShotMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
}

void AEnemyProjectile_FlyingTurret::BeginPlay()
{
	Super::BeginPlay();

	if(GetGameInstance())
	{
		CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	}
	
	ShotMesh->OnComponentBeginOverlap.AddDynamic(this, &AEnemyProjectile_FlyingTurret::OnOverlapStart);
}

void AEnemyProjectile_FlyingTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EnableCollision();
}

void AEnemyProjectile_FlyingTurret::EnableCollision()
{
	if (ShotMesh->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		ShotMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}
