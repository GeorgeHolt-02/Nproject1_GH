// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_PlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class NPROJECT2_GH_API UWidget_PlayerHUD : public UUserWidget
{
	GENERATED_BODY()

public:
	/* High score text widget */
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	class UTextBlock* HighScoreTextBlock;

	/* Player score text widget */
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	UTextBlock* PlayerScoreTextBlock;

	/* Life count text widget */
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	UTextBlock* LivesTextBlock;

	/* Score multiplier text widget */
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	UTextBlock* MultiplierTextBlock;

	/* Score multiplier meter widget */
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	class UProgressBar* MultiplierBuildupBar;

	/* Canvas for the multiplier widgets */
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	class UCanvasPanel* MultiplierCanvas;

	/* Player character reference */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class APlayerChar* Player;

	/* Game instance reference */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UMyGameInstance* CurrentGameInstance;

protected:
	virtual void NativeConstruct() override;
	
public:
	//Functions used to update the above widgets
	UFUNCTION()
	void SetHighScore(int CurrentHighScore);
	UFUNCTION()
	void SetPlayerScore(int CurrentPlayerScore);
	UFUNCTION()
	void SetLives(int CurrentLives);
	UFUNCTION()
	void SetMultiplier(float CurrentMultiplier);
	UFUNCTION()
	void SetMultiplierBuildUp(float CurrentMeter, float MaxMeter);
	UFUNCTION()
	void SetMultiplierCanvasOpacity(float CurrentMultiplier);
};
