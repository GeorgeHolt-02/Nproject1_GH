// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShot.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
APlayerShot::APlayerShot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShotMesh"));
	RootComponent = ShotMesh;

	ShotMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ShotMovement"));

	ShotMovement->InitialSpeed = 761.25f;
	ShotMovement->MaxSpeed = 0.0f;
	ShotMovement->Velocity = FVector(1.0f, 0.0f, 0.0f);
	ShotMovement->bRotationFollowsVelocity = true;
	ShotMovement->ProjectileGravityScale = 0.0f;
	ShotMovement->SetPlaneConstraintNormal(FVector(0.0f, 0.0f, 0.0f));
	ShotMovement->bConstrainToPlane = false;

	ShotMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Damage = 1.0f;
}

// Called when the game starts or when spawned
void APlayerShot::BeginPlay()
{
	Super::BeginPlay();

	ShotMesh->OnComponentHit.AddDynamic(this, &APlayerShot::OnHit);
	ShotMesh->OnComponentBeginOverlap.AddDynamic(this, &APlayerShot::OnOverlapStart);
	ShotMesh->OnComponentEndOverlap.AddDynamic(this, &APlayerShot::OnOverlapFinish);
}

// Called every frame
void APlayerShot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (ShotMesh->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
	{
		ShotMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

void APlayerShot::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& HitResult)
{
	if (IsValid(OtherComp))
	{
		Destroy();
	}
	else if (IsValid(OtherActor))
	{
		Destroy();
	}
}

void APlayerShot::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IsValid(OtherComp))
	{
		Destroy();
	}
	else if (IsValid(OtherActor))
	{
		Destroy();
	}
}

void APlayerShot::OnOverlapFinish(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
}