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

	//** Rotation rate */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float RotationRate;
	
	//** Gravity (rate of increase in downward speed when in mid-air (unless overridden) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Gravity;

	//** Terminal falling speed - the speed that the enemy caps at when falling */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float TerminalFallSpeed;

	/** Whether or not a given sweep is done purely for positioning purposes */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bPositioningSweep;
	
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
};
