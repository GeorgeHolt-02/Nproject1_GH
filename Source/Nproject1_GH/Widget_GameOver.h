// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
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

	//The characters the player can enter
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString Characters;
	
	//Initials widget instance
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	class UTextBlock* Initials;

	//Text block to initialise record text block array with
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	UTextBlock* InitRecordText;

	//Leaderboards text block array
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<UTextBlock*> Records;
	
public:
	virtual void NativeConstruct() override;

	virtual void NativeOnInitialized() override;
};
