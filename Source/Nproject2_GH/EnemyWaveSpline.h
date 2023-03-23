// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "Components/SplineComponent.h"
#include "EnemyWaveSpline.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API UEnemyWaveSpline : public USplineComponent
{
	GENERATED_BODY()
	
public:
	// Sets default values
	UEnemyWaveSpline();

	//** Enemy class to spawn */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TSubclassOf<ABaseEnemy> EnemyBP;

	//** Enemy class reference array */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TSubclassOf<ABaseEnemy>> EnemyReferences;
};
