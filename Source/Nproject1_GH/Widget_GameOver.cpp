// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_GameOver.h"

#include <string>

#include "ButtonWidget.h"
#include "MyGameInstance.h"
#include "TextWidget.h"
#include "Widget_Initial.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"

void UWidget_GameOver::NativeConstruct()
{
	Super::NativeConstruct();

	RecordIndex = NULL;
	PlayerRecord = nullptr;

	GameResetTimer = 3.0f;
	bResetTimerActive = false;
	CountdownTime = 20.0f;
	
	CountdownTextBlock->SetText(FText::FromString(FString::Printf(TEXT("%.2f"), CountdownTime)));
	TopTenScores.Empty();
	CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	if(CurrentGameInstance)
	{
		TopTenScores.Append(CurrentGameInstance->TopTenScores);
		
		if (CurrentGameInstance->PlayerScore > TopTenScores.Last().Score)
		{
			int i;
			for (i = (TopTenScores.Num() - 1); i > 0; i--)
			{
				if(CurrentGameInstance->PlayerScore <= TopTenScores[i-1].Score)
				{
					break;
				}
			}
			FRecord NewRecord;
			NewRecord.Name = FString("AAA");
			NewRecord.Score = CurrentGameInstance->PlayerScore;
			TopTenScores.Insert(NewRecord, i);
			if(TopTenScores.Num() > 10)
			{
				TopTenScores.Pop(true);
			}
			RecordIndex = i;
		}
	}

	if(RecordTextRef)
	{
		for(int i = RecordBox->GetChildrenCount(); i < 10; i++)
		{
			UTextWidget* RecordWidget = CreateWidget<UTextWidget>(this, RecordTextRef);
			RecordBox->AddChildToVerticalBox(RecordWidget);
			RecordWidget->SetData((i+1), TopTenScores[i].Name, TopTenScores[i].Score);
			if(RecordIndex != NULL)
			{
				if(i == RecordIndex)
				{
					PlayerRecord = RecordWidget;
					if(i <= 0)
					{
						PlayerRecord->Text->SetColorAndOpacity(FSlateColor(FColor::Yellow));
					}
					else
					{
						PlayerRecord->Text->SetColorAndOpacity(FSlateColor(FColor::Green));
					}
				}
			}
		}
	}

	if(InitialRef)
	{
		for(int i = InitialsBox->GetChildrenCount(); i < 3; i++)
		{
			UWidget_Initial* InitialWidget = CreateWidget<UWidget_Initial>(this, InitialRef);
			InitialsBox->AddChildToHorizontalBox(InitialWidget);
			InitialsArray.Add(InitialWidget);
		}
		SelectedInitial = Cast<UWidget_Initial>(InitialsBox->GetAllChildren()[0]);
	}

	if(FinishButtonRef)
	{
		UUserWidget* FinishButtonWidget = CreateWidget(this, FinishButtonRef);
		FinishButtonBox->AddChildToVerticalBox(FinishButtonWidget);
		FinishButton = Cast<UButtonWidget>(FinishButtonWidget);
		FinishButton->Button->OnPressed.AddDynamic(this, &UWidget_GameOver::FinishEntry);
	}

	BG_Button->OnPressed.AddDynamic(this, &UWidget_GameOver::ResetButtonKeyboardFocus);
	
	//UGameplayStatics::SetGamePaused(GetWorld(), true);
					
	PlayerController = GetWorld()->GetFirstPlayerController();
	
	if(PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("Valid"));
		SetOwningPlayer(PlayerController);
		PlayerController->SetShowMouseCursor(true);
		UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(PlayerController, this, EMouseLockMode::DoNotLock);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not Valid"));
	}
	
	SelectedInitial->DownButton->Button->SetKeyboardFocus();
}

void UWidget_GameOver::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if(PlayerRecord)
	{
		PlayerRecord->Initials = FString("");
		for(int i = 0; i < InitialsArray.Num(); i++)
		{
			PlayerRecord->Initials += InitialsArray[i]->Characters.Chr(InitialsArray[i]->Characters[InitialsArray[i]->CharactersIndex]);
		}
	}

	if(CountdownTime > 0.0f)
	{
		CountdownTime -= InDeltaTime;
		if(CountdownTime <= 0.0f)
		{
			CountdownTime = 0.0f;
			FinishEntry();
		}
	}

	CountdownTextBlock->SetText(FText::FromString(FString::Printf(TEXT("%.2f"), CountdownTime)));
	
	if(bResetTimerActive)
	{
		GameResetTimer -= InDeltaTime;
	}

	if(GameResetTimer <= 0.0f)
	{
		if(CurrentGameInstance)
		{
			CurrentGameInstance->PlayerScore = 0;
			CurrentGameInstance->ScoreSinceLastXtraLife = 0;
			CurrentGameInstance->ScoreForXtraLives = CurrentGameInstance->ScoreForFirstXtraLife;
			if(CurrentGameInstance->Levels.IsValidIndex(0))
			{
				CurrentGameInstance->LoadSpecifiedLevel(CurrentGameInstance->Levels[0]);
				CurrentGameInstance->NextLevelIndex = 1;
			}
			CurrentGameInstance->PlayerLives_Current = CurrentGameInstance->PlayerLives_Starting;
			CurrentGameInstance->bCanRestart = true;
			PlayerController->SetShowMouseCursor(false);
			UWidgetBlueprintLibrary::SetInputMode_GameOnly(PlayerController);
			RemoveFromViewport();
		}
	}
}

void UWidget_GameOver::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	
}

void UWidget_GameOver::FinishEntry()
{
	UE_LOG(LogTemp, Warning, TEXT("Saved?"));
	
	UMySaveGame* LeaderboardsSave = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(FString("TestSaveSlot"), 0));
	if(LeaderboardsSave)
	{
		FRecord NewRecord;
		NewRecord.Name = PlayerRecord->Initials;
		NewRecord.Score = PlayerRecord->Score;
		LeaderboardsSave->TopTenScores.Insert(NewRecord, RecordIndex);
		if(LeaderboardsSave->TopTenScores.Num() > 10)
		{
			LeaderboardsSave->TopTenScores.Pop(true);
		}
		if (LeaderboardsSave->PlayerPB == NULL || NewRecord.Score > LeaderboardsSave->PlayerPB)
		{
			LeaderboardsSave->PlayerPB = NewRecord.Score;
		}
		
		if(CurrentGameInstance)
		{
			CurrentGameInstance->TopTenScores.Insert(NewRecord, RecordIndex);
			if(CurrentGameInstance->TopTenScores.Num() > 10)
			{
				CurrentGameInstance->TopTenScores.Pop(true);
			}
			if (CurrentGameInstance->PlayerPB == NULL || NewRecord.Score > CurrentGameInstance->PlayerPB)
			{
				CurrentGameInstance->PlayerPB = NewRecord.Score;
			}
		}
		UGameplayStatics::SaveGameToSlot(LeaderboardsSave, LeaderboardsSave->SaveSlotName, LeaderboardsSave->UserIndex);
	}
	
	bResetTimerActive = true;

	FinishButton->RemoveFromParent();
	InitialsBox->RemoveFromParent();
	CountdownTextBlock->RemoveFromParent();
	//FinishButton->Button->OnPressed.RemoveAll(this);
}

void UWidget_GameOver::ResetButtonKeyboardFocus()
{
	SelectedInitial->DownButton->Button->SetKeyboardFocus();
}
