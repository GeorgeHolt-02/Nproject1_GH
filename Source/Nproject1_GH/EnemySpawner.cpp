// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"

#include "MyGameInstance.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Origin = CreateDefaultSubobject<USceneComponent>(TEXT("Origin"));
	SetRootComponent(Origin);

	NumWaves = 3;

	//Waves.Empty();
	for (int i = 0; i < NumWaves; i++)
	{
		Waves.Add(CreateDefaultSubobject<UEnemyWaveSpline>(*FString("Wave" + FString::FromInt(i+1))));
		Waves[i]->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform,
			*FString("EWS" + FString::FromInt(i+1)));
	}

	SpawnInterval_Max = 10.0f;
	SpawnInterval_Current = SpawnInterval_Max;

	WavesIndex = 0;

	CurrentGameInstance = nullptr;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
	if(GetGameInstance())
	{
		CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	}
	if(CurrentGameInstance)
	{
		CurrentGameInstance->EnemyNum = 0;
		for(int i = 0; i < Waves.Num(); i++)
		{
			CurrentGameInstance->EnemyNum += Waves[i]->GetNumberOfSplinePoints();
		}
	}

	SpawnEnemies();
	
	SpawnInterval_Current = SpawnInterval_Max;
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("%i"), CurrentGameInstance->EnemyNum);
	
	if(CurrentGameInstance)
	{
		if(CurrentGameInstance->EnemyNum <= 0)
		{
			if(CurrentGameInstance->Levels.IsValidIndex(CurrentGameInstance->NextLevelIndex))
			{
				CurrentGameInstance->LoadSpecifiedLevel(CurrentGameInstance->Levels[CurrentGameInstance->NextLevelIndex]);
				CurrentGameInstance->NextLevelIndex++;
				CurrentGameInstance->bCanLoadNextLevel = false;
			}
			else
			{
				if(CurrentGameInstance->bCanRestart)
				{
					if(CurrentGameInstance->Levels.IsValidIndex(0))
					{
						CurrentGameInstance->LoadSpecifiedLevel(CurrentGameInstance->Levels[0]);
						CurrentGameInstance->NextLevelIndex = 1;
						CurrentGameInstance->bCanLoadNextLevel = false;
					}
				}
			}
			CurrentGameInstance->EnemyNum = 0;
			for(int i = 0; i < Waves.Num(); i++)
			{
				CurrentGameInstance->EnemyNum += Waves[i]->GetNumberOfSplinePoints();
			}
		}
	}
	
	SpawnTimer(DeltaTime);
}

void AEnemySpawner::SpawnTimer(float DeltaTime)
{
	if (SpawnInterval_Current > 0.0f)
	{
		SpawnInterval_Current -= DeltaTime;
		if (SpawnInterval_Current <= 0.0f)
		{
			SpawnEnemies();
			if(WavesIndex < Waves.Num())
			{
				SpawnInterval_Current = SpawnInterval_Max;
			}
		}
	}
}

void AEnemySpawner::SpawnEnemies()
{
	if(WavesIndex < Waves.Num())
	{
		for(int i = 0; i < Waves[WavesIndex]->GetNumberOfSplinePoints(); i++)
		{
			if(Waves[WavesIndex]->EnemyReferences[i])
			{
				const FActorSpawnParameters SpawnParams;

				ABaseEnemy* EnemyToSpawn = (GetWorld()->SpawnActor<ABaseEnemy>(Waves[WavesIndex]->EnemyReferences[i], Waves[WavesIndex]->GetWorldLocationAtSplinePoint(i),
					FRotator(0.0f, 0.0f, 0.0f), SpawnParams));
			}
		}
		WavesIndex++;
	}
}

