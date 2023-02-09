// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonWidget.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT1_GH_API UButtonWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	//The button itself
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	class UButton* Button;
};
