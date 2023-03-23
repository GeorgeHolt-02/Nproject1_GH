// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemyProjectile.h"
#include "EnemyProjectile_FlyingTurret.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API AEnemyProjectile_FlyingTurret : public ABaseEnemyProjectile
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AEnemyProjectile_FlyingTurret();

	/** Shot mesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ShotMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Enables collision on the first frame
	void EnableCollision();
};
