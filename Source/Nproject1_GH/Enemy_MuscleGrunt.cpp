// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_MuscleGrunt.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"

AEnemy_MuscleGrunt::AEnemy_MuscleGrunt()
{
	SetRootComponent(EnemyCollider);
	
	EnemyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EnemyMesh"));
	EnemyMesh->SetupAttachment(RootComponent);

	Health_Max = 10.0f;

	MovementSpeed = 50.0f;

	RotationRate = 720.0f;

	Gravity = 10.0f;

	ForwardVector = FVector(0.0f, 0.0f, 0.0f);
	RightVector = FVector(0.0f, 0.0f, 0.0f);
	UpVector = FVector(0.0f, 0.0f, 0.0f);

	TerminalFallSpeed = 1000.0f;

	OriginalZSpeed = 0.0f;

	bPositioningSweep = false;

	Player = nullptr;

	bPlayerPresent = false;
}

void AEnemy_MuscleGrunt::BeginPlay()
{
	Super::BeginPlay();

	EnemyCollider->OnComponentHit.AddDynamic(this, &AEnemy_MuscleGrunt::OnHit);

	if (GetWorld()->GetFirstPlayerController()->GetPawn() != nullptr)
	{
		bPlayerPresent = true;
	}
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

	EnemyGravity(DeltaTime);
	
	FallSpeedCap();
	
	GroundCollision(DeltaTime);
	CeilingCollision(DeltaTime);
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
	if(bPlayerPresent)
	{
		SetActorRotation(FRotator(
			GetActorRotation().Pitch,
			UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation()).Yaw - 90.0f,
			GetActorRotation().Roll
		));	
	}

	SetActorLocation((GetActorLocation() + (FVector(0.0f, 1.0f, 0.0f) * DeltaTime * MovementSpeed)), true);
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

void AEnemy_MuscleGrunt::EnemyGravity(float DeltaTime)
{
	UpVector -= FVector(0.0f, 0.0f, (FMath::Square(Gravity)) * DeltaTime);
	
	SetActorLocation((GetActorLocation() + (UpVector * DeltaTime)), true);
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

void AEnemy_MuscleGrunt::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
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
