// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FRecord
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString Name = FString("AAA");
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int Score = 0;
};
UCLASS()
class NPROJECT2_GH_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	//Sets default values
	UMySaveGame();
	
	//Array of the top ten highest recorded scores for this copy of this build of the game
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FRecord> TopTenScores;

	//Player's personal best
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int PlayerPB;

#pragma region Save Game ID Variables
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString SaveSlotName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int UserIndex;

#pragma endregion
	
};
