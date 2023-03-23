// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_Initial.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API UWidget_Initial : public UUserWidget
{
	GENERATED_BODY()

public:
	//The vertical box containing the nav buttons and the letter
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	class UVerticalBox* ContentsBox;

	//The character that the effects of clicking the nav buttons change
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<class UWidget_Char> CharRef;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UWidget_Char* Char;

	//The up arrow that cycles backwards through the character string
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<class UButtonWidget> UpArrowRef;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UButtonWidget* UpButton;
	
	//The down arrow that cycles forwards through the character string
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<UButtonWidget> DownArrowRef;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UButtonWidget* DownButton;
	
	//The characters the player can enter
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString Characters;

	//Current index of the character string
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int CharactersIndex;

	//Button press booleans
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bUpPressed;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bDownPressed;

	//Time until next cycle (max and current, respectively)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float CycleRate_Max;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float CycleRate_Current;
	

protected:
	virtual void NativeConstruct() override;

	virtual void NativeOnInitialized() override;

	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	//Button press listeners
	UFUNCTION()
	void UpButtonPressed();
	UFUNCTION()
	void DownButtonPressed();

	//Button release listeners
	UFUNCTION()
	void UpButtonReleased();
	UFUNCTION()
	void DownButtonReleased();
	
	void CycleDown();
	void CycleUp();
	
};
