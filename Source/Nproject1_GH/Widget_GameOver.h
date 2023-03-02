// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ButtonWidget.h"
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

	//Finish button
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<UButtonWidget> FinishButtonRef;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UButtonWidget* FinishButton;
	
	//Initials box
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	class UHorizontalBox* InitialsBox;

	//This box contains the finish button
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	UVerticalBox* FinishButtonBox;
	
	//Currently-selected initial
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UWidget_Initial* SelectedInitial;
	
	//Index determining which initial is highlighted
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int InitialIndex;

	//Game instance reference
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UMyGameInstance* CurrentGameInstance;
	
	//Background button
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	class UButton* BG_Button;

	//Player's score index
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int RecordIndex;

	//Player's score record text widget
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UTextWidget* PlayerRecord;

	//Initial widget array
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<UWidget_Initial*> InitialsArray;

	//Reset timer
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float GameResetTimer;

	//Whether or not the reset timer should be active
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bResetTimerActive;

	//Player controller reference
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	APlayerController* PlayerController;

	//Name entry countdown timer
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float CountdownTime;

	//Countdown text block
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* CountdownTextBlock;
	
protected:
	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	virtual void NativeOnInitialized() override;

public:
	UFUNCTION()
	void FinishEntry();

	UFUNCTION()
	void ResetButtonKeyboardFocus();
};
