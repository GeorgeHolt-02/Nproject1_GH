// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_Char.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT1_GH_API UWidget_Char : public UUserWidget
{
	GENERATED_BODY()

public:
	//Text Block
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Text;

	
};
