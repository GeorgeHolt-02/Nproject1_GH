// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include "Kismet/GameplayStatics.h"

UMyGameInstance::UMyGameInstance()
{
	PlayerLives_Max = 3;
	PlayerLives_Current = PlayerLives_Max;

	PlayerScore = 0;
}

void UMyGameInstance::Init()
{
	Super::Init();

	PlayerLives_Current = PlayerLives_Max;
	
	PlayerScore = 0;
}

void UMyGameInstance::LoadSpecifiedLevel(FName LevelName)
{
	UGameplayStatics::OpenLevel(GetWorld(), LevelName, true);
}
