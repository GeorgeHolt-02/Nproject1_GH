// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShot.h"
#include "BaseEnemy.h"
#include "PlayerChar.h"
#include "Widget_PlayerHUD.h"
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
	Player = nullptr;
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
		const ABaseEnemy* MyEnemy = Cast<ABaseEnemy>(OtherComp->GetAttachmentRootActor());
		if(MyEnemy)
		{
			Destroy();
		}
		else
		{
			if(Player)
			{
				Destroy();
				Player->ScoreMultiplier_Current = 1.0f;
				Player->MultiplierMeter_Current = 0.0f;
				if(Player->PlayerHUD)
				{
					Player->PlayerHUD->SetMultiplier(Player->ScoreMultiplier_Current);
					Player->PlayerHUD->SetMultiplierBuildUp(Player->MultiplierMeter_Current, Player->MultiplierMeter_NeededForIncrease);
					Player->PlayerHUD->SetMultiplierCanvasOpacity(Player->ScoreMultiplier_Current);
				}
			}
		}
	}
	else if (IsValid(OtherActor))
	{
		const ABaseEnemy* MyEnemy = Cast<ABaseEnemy>(OtherActor);
		if(MyEnemy)
		{
			Destroy();
		}
		else
		{
			if(Player)
			{
				Destroy();
				Player->ScoreMultiplier_Current = 1.0f;
				Player->MultiplierMeter_Current = 0.0f;
				if(Player->PlayerHUD)
				{
					Player->PlayerHUD->SetMultiplier(Player->ScoreMultiplier_Current);
					Player->PlayerHUD->SetMultiplierBuildUp(Player->MultiplierMeter_Current, Player->MultiplierMeter_NeededForIncrease);
					Player->PlayerHUD->SetMultiplierCanvasOpacity(Player->ScoreMultiplier_Current);
				}
			}
		}
	}
}

void APlayerShot::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IsValid(OtherComp))
	{
		// const ABaseEnemy* MyEnemy = Cast<ABaseEnemy>(OtherComp->GetAttachmentRootActor());
		// if(MyEnemy)
		// {
		// 	Destroy();
		// }
		// else
		// {
		// 	if(Player)
		// 	{
		// 		Destroy();
		// 		Player->ScoreMultiplier_Current = 1.0f;
		// 		Player->MultiplierMeter_Current = 0.0f;
		// 	}
		// }
		Destroy();
	}
	else if (IsValid(OtherActor))
	{
		// const ABaseEnemy* MyEnemy = Cast<ABaseEnemy>(OtherActor);
		// if(MyEnemy)
		// {
		// 	Destroy();
		// }
		// else
		// {
		// 	if(Player)
		// 	{
		// 		Destroy();
		// 		Player->ScoreMultiplier_Current = 1.0f;
		// 		Player->MultiplierMeter_Current = 0.0f;
		// 	}
		// }
		Destroy();
	}
}

void APlayerShot::OnOverlapFinish(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (IsValid(OtherComp))
	{
		// const ABaseEnemy* MyEnemy = Cast<ABaseEnemy>(OtherComp->GetAttachmentRootActor());
		// if(MyEnemy)
		// {
		// 	Destroy();
		// }
		// else
		// {
		// 	if(Player)
		// 	{
		// 		Destroy();
		// 		Player->ScoreMultiplier_Current = 1.0f;
		// 		Player->MultiplierMeter_Current = 0.0f;
		// 	}
		// }
		Destroy();
	}
	else if (IsValid(OtherActor))
	{
		// const ABaseEnemy* MyEnemy = Cast<ABaseEnemy>(OtherActor);
		// if(MyEnemy)
		// {
		// 	Destroy();
		// }
		// else
		// {
		// 	if(Player)
		// 	{
		// 		Destroy();
		// 		Player->ScoreMultiplier_Current = 1.0f;
		// 		Player->MultiplierMeter_Current = 0.0f;
		// 	}
		// }
		Destroy();
	}
}
