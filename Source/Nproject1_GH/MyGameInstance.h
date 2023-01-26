// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */

UCLASS()
class NPROJECT1_GH_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	//Sets default values
	UMyGameInstance();

	/** Player's lives (max and current, respectively */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int PlayerLives_Max;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int PlayerLives_Current;

	/** Player's current score */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int PlayerScore;
	
protected:


public:

	
	void Init() override;
	
	//Loads the specified level
	UFUNCTION()
	void LoadSpecifiedLevel(FName LevelName);
};
