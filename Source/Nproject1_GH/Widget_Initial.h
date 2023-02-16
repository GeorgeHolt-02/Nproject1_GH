// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_Initial.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT1_GH_API UWidget_Initial : public UUserWidget
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
	

protected:
	virtual void NativeConstruct() override;

	void CycleDown();
	void CycleUp();
};
