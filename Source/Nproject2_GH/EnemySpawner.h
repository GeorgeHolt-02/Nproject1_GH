// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyWaveSpline.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class NPROJECT2_GH_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

	//** Origin */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* Origin;

	//** Number of splines to create */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int NumWaves;
	
	//** Spline array */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wave Splines")
	TArray<UEnemyWaveSpline*> Waves;

	//** Interval on which the spawn function is called (max and current, respectively) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float SpawnInterval_Max;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float SpawnInterval_Current;

	//** Wave array "iterator" integer */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int WavesIndex;

	/** Game instance reference */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UMyGameInstance* CurrentGameInstance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SpawnTimer(float DeltaTime);
	
	// Spawns in the enemies that make up the current wave
	void SpawnEnemies();
};
