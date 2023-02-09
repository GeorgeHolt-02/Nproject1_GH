// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TextWidget.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT1_GH_API UTextWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	//Text Block
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Text;

	//Where it ranks on the top ten
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int TopTenRanking;

	//Initials entered
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString Initials;

	//Score
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int Score;

public:
	UFUNCTION(BlueprintCallable)
	void SetData(int ranking, FString inits, int points);
	
};
