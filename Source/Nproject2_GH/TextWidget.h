// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TextWidget.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API UTextWidget : public UUserWidget
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

	//Score string
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString ScoreString;

	//Whether or not to update
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanUpdate;

protected:
	virtual void NativeConstruct() override;
	
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
public:
	UFUNCTION(BlueprintCallable)
	void SetData(int ranking, FString inits, int points);
	
};
