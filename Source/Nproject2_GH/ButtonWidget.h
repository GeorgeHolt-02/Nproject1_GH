// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonWidget.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API UButtonWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	//The button itself
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	class UButton* Button;

	//Styles
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FButtonStyle Style_Mouse;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FButtonStyle Style_Normal;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FButtonStyle Style_Hovered;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FButtonStyle Style_Pressed;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FButtonStyle Style_Disabled;

protected:
	virtual void NativeConstruct() override;
	
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	void CheckFocus();
};
