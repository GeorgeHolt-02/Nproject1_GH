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

	ScoreForFirstXtraLife = 50;
	ScoreForSubsequentXtraLives = 100;

	ScoreForXtraLives = ScoreForFirstXtraLife;
	ScoreSinceLastXtraLife = 0;
}

void UMyGameInstance::Init()
{
	Super::Init();

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
		if (PlayerLives_Current < PlayerLives_Max)
		{
			PlayerLives_Current++;
		}
		ScoreForXtraLives += ScoreForSubsequentXtraLives;
		UE_LOG(LogTemp, Warning, TEXT("Score Required: %i"), ScoreForXtraLives);
		
	}
}
