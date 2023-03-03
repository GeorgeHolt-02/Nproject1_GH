// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_PlayerHUD.h"

#include "MyGameInstance.h"
#include "PlayerChar.h"
#include "Components/CanvasPanel.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UWidget_PlayerHUD::NativeConstruct()
{
	Super::NativeConstruct();

	Player = Cast<APlayerChar>(GetOwningPlayerPawn());

	MultiplierCanvas->SetRenderOpacity(0.0f);

	if(MultiplierBuildupBar)
	{
		MultiplierBuildupBar->SetPercent(0.0f);
	}
	
	if(Player)
	{
		if(MultiplierTextBlock)
		{
			MultiplierTextBlock->SetText(FText::FromString((FString("x") + (FString::SanitizeFloat(Player->ScoreMultiplier_Current)))));
		}
		CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
		if(CurrentGameInstance)
		{
			if(HighScoreTextBlock)
			{
				HighScoreTextBlock->SetText(FText::FromString(FString::FromInt(FMath::Max(Player->HighScore, CurrentGameInstance->PlayerScore))));
			}
			if(PlayerScoreTextBlock)
			{
				PlayerScoreTextBlock->SetText(FText::FromString((FString("SCORE: ") + (FString::FromInt(CurrentGameInstance->PlayerScore)))));
			}
			if(LivesTextBlock)
			{
				LivesTextBlock->SetText(FText::FromString((FString("LIVES: ") + (FString::FromInt(CurrentGameInstance->PlayerLives_Current)))));
			}
		}
	}
}

void UWidget_PlayerHUD::SetHighScore(int CurrentHighScore)
{
	if(HighScoreTextBlock)
	{
		HighScoreTextBlock->SetText(FText::FromString(FString::FromInt(CurrentHighScore)));
	}
}

void UWidget_PlayerHUD::SetPlayerScore(int CurrentPlayerScore)
{
	if(PlayerScoreTextBlock)
	{
		PlayerScoreTextBlock->SetText(FText::FromString((FString("SCORE: ") + (FString::FromInt(CurrentPlayerScore)))));
	}
}

void UWidget_PlayerHUD::SetLives(int CurrentLives)
{
	if(LivesTextBlock)
	{
		LivesTextBlock->SetText(FText::FromString((FString("LIVES: ") + (FString::FromInt(CurrentLives)))));
	}
}

void UWidget_PlayerHUD::SetMultiplier(float CurrentMultiplier)
{
	if(MultiplierTextBlock)
	{
		MultiplierTextBlock->SetText(FText::FromString((FString("x") + (FString::SanitizeFloat(CurrentMultiplier)))));
	}
}

void UWidget_PlayerHUD::SetMultiplierBuildUp(float CurrentMeter, float MaxMeter)
{
	if(MultiplierBuildupBar)
	{
		MultiplierBuildupBar->SetPercent(CurrentMeter / MaxMeter);
	}
}

void UWidget_PlayerHUD::SetMultiplierCanvasOpacity(float CurrentMultiplier)
{
	if((MultiplierBuildupBar->Percent) > 0.0f || (CurrentMultiplier > 1.0f))
	{
		MultiplierCanvas->SetRenderOpacity(1.0f);
	}
	else
	{
		MultiplierCanvas->SetRenderOpacity(0.0f);
	}
}
