// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "Enemy_MuscleGrunt.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT1_GH_API AEnemy_MuscleGrunt : public ABaseEnemy
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemy_MuscleGrunt();

	//** Enemy visual/mesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* EnemyMesh;
	
	//** Movement speed */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed;
	
	//** Gravity (rate of increase in downward speed when in mid-air (unless overridden) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Gravity;

	/** What the Z-speed was on the previous frame */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	float OriginalZSpeed;

	//** Translation vectors */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FVector ForwardVector;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FVector RightVector;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FVector UpVector;

	//** Terminal falling speed - the speed that the enemy caps at when falling */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float TerminalFallSpeed;

	/** Whether or not a given sweep is done purely for positioning purposes */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bPositioningSweep;

	/** The enemy's current yaw rotator */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FRotator YawRotator;

	/** The direction the enemy is facing */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Direction;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void StartInvulnPeriod() override;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void InvulnPeriod(float DeltaTime) override;
	virtual void VisibilityFlashing(float DeltaTime) override;
	virtual void MainBehaviour(float DeltaTime) override;
	virtual void DamageFunction(float Damage) override;

	// Enemy gravity
	void EnemyGravity(float DeltaTime);

	// Called to cause ground collision effects
	void GroundCollision(float DeltaTime);
	// Called to cause ceiling collision effects
	void CeilingCollision(float DeltaTime);

	// Called to cap falling speed
	void FallSpeedCap();

	// Destroys upon falling into the abyss
	void FallDeath();

	// Called on a hit
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		FVector NormalImpulse, const FHitResult& HitResult);
	
	virtual void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult) override;
};
