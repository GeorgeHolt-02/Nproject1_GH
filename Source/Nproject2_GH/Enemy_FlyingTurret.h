// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "EnemyProjectile_FlyingTurret.h"
#include "Enemy_FlyingTurret.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AEnemy_FlyingTurret : public ABaseEnemy
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemy_FlyingTurret();

	//** Enemy visual/meshes */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* EnemyBaseMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* EnemyCannonMesh;

	//** Projectile origin transform */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	USceneComponent* ShotTransform;

	//** Movement speed */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed_Horizontal;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed_Vertical;
	
	//** The amount of distance a projectile can travel before it despawns */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shooting")
	float MaxProjTravelDistance;

	/** The name of the projectile currently being checked when determining
	whether or not the player can fire again */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
	FName ShotTag;

	/** Whether or not the enemy can actually shoot */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Shooting")
	bool bCanShoot;

	//** The number of fired projectiles currently in the scene */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
	TArray<AActor*> FoundShots;

	//** Projectile Blueprint */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shooting")
	TSubclassOf<AEnemyProjectile_FlyingTurret> ShotBP;

	/** The enemy's current yaw rotator */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FRotator YawRotator;

	/** The direction the enemy is facing */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Direction;

	/** The interval at which the enemy fires/changes direction */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float TurretInterval;
	/** Remaining interval time */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float TurretInterval_TimeLeft;

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

	//Shooting function
	void Shoot();
	//Destroys projectiles that are far-away enough from the player
	void ShotCleanup();
};
