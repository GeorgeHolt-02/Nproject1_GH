// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_PlayerHUD.h"

#include "MyGameInstance.h"
#include "PlayerChar.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UWidget_PlayerHUD::NativeConstruct()
{
	Super::NativeConstruct();

	Player = Cast<APlayerChar>(GetOwningPlayerPawn());

	if(MultiplierBuildupBar)
	{
		MultiplierBuildupBar->SetPercent(0.0f);
	}
	
	if(Player)
	{
		if(HighScoreTextBlock)
		{
			HighScoreTextBlock->SetText(FText::FromString((FString("HISCORE\n") + (FString::FromInt(Player->HighScore)))));
		}
		if(MultiplierTextBlock)
		{
			MultiplierTextBlock->SetText(FText::FromString((FString("x") + (FString::FromInt(Player->ScoreMultiplier_Current)))));
		}
	}
	CurrentGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	if(CurrentGameInstance)
	{
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

void UWidget_PlayerHUD::SetHighScore(int CurrentHighScore)
{
	if(HighScoreTextBlock)
	{
		HighScoreTextBlock->SetText(FText::FromString((FString("HISCORE\n") + (FString::FromInt(CurrentHighScore)))));
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
