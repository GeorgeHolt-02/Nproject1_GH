// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MySaveGame.h"
#include "Widget_GameOver.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT1_GH_API UWidget_GameOver : public UUserWidget
{
	GENERATED_BODY()

public:
	// //Sets default values
	// UWidget_GameOver();

	//Array of the top ten highest recorded scores for this copy of this build of the game
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FRecord> TopTenScores;

	//Save game class to create an object of
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UMySaveGame> SaveGameBP;
	
	//Record text reference
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<class UTextWidget> RecordTextRef;
	
	//Leaderboards box
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	class UVerticalBox* RecordBox;

	//Initial entry widget reference
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<class UWidget_Initial> InitialRef;
	
	//Initials box
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	class UHorizontalBox* InitialsBox;

	//Currently-selected initial
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UWidget_Initial* SelectedInitial;
	
	//Index determining which initial is highlighted
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int InitialIndex;
	
protected:
	virtual void NativeConstruct() override;

	virtual void NativeOnInitialized() override;

	UFUNCTION()
	virtual void InitializeInputComponent() override;

	UFUNCTION()
	void SelectInitial(float Value);

	UFUNCTION()
	void CharCycle(float Value);
	
};
