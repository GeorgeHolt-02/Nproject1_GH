// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include "Kismet/GameplayStatics.h"

UMyGameInstance::UMyGameInstance()
{
	PlayerLives_Starting = 2;
	PlayerLives_Max = 9;
	PlayerLives_Current = PlayerLives_Max;

	PlayerScore = 0;

	NextLevelIndex = 1;
	
	EnemyNum = 0;
	
	bCanLoadNextLevel = false;
	bCanRestart = true;

	ScoreForFirstXtraLife = 50;
	ScoreForSubsequentXtraLives = 200;

	ScoreForXtraLives = ScoreForFirstXtraLife;
	ScoreSinceLastXtraLife = 0;

	PlayerPB = NULL;
}

void UMyGameInstance::Init()
{
	Super::Init();
	
	UMySaveGame* LeaderboardsSave = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(FString("TestSaveSlot"), 0));
	if(LeaderboardsSave)
	{
		TopTenScores.Empty();
		
		for (int i = 0; i < 10; i++)
		{
			TopTenScores.Add(LeaderboardsSave->TopTenScores[i]);
		}

		PlayerPB = LeaderboardsSave->PlayerPB;
	}
	else
	{
		LeaderboardsSave = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(SaveGameBP));
		if(LeaderboardsSave)
		{
			UGameplayStatics::SaveGameToSlot(LeaderboardsSave, LeaderboardsSave->SaveSlotName, LeaderboardsSave->UserIndex);

			TopTenScores.Empty();
			
			for (int i = 0; i < 10; i++)
			{
				TopTenScores.Add(LeaderboardsSave->TopTenScores[i]);
			}
		}
	}
	
	PlayerLives_Current = PlayerLives_Starting;
	
	PlayerScore = 0;

	ScoreForXtraLives = ScoreForFirstXtraLife;
	ScoreSinceLastXtraLife = 0;
}

void UMyGameInstance::LoadSpecifiedLevel(TSoftObjectPtr<UWorld> Level)
{
	UGameplayStatics::OpenLevelBySoftObjectPtr(GetWorld(), Level, true);
}

void UMyGameInstance::LoadSpecifiedLevelByName(FName LevelName)
{
	UGameplayStatics::OpenLevel(GetWorld(), LevelName, true);
}

void UMyGameInstance::AddXtraLives()
{
	if (PlayerScore >= ScoreForXtraLives)
	{
		for(int i = ScoreForXtraLives;
			i <= PlayerScore;
			i += ScoreForSubsequentXtraLives)
		{
			PlayerLives_Current = FMath::Clamp((PlayerLives_Current + 1), 0, PlayerLives_Max);
			ScoreForXtraLives += ScoreForSubsequentXtraLives;
		}
		UE_LOG(LogTemp, Warning, TEXT("Score Required: %i"), ScoreForXtraLives);
	}
}
