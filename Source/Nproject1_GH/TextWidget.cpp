// Fill out your copyright notice in the Description page of Project Settings.


#include "TextWidget.h"

#include "Components/TextBlock.h"

void UTextWidget::NativeConstruct()
{
	Super::NativeConstruct();

	bCanUpdate = false;
}

void UTextWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if(bCanUpdate)
	{
		Text->SetText(FText::FromString(FString(FString::FromInt(TopTenRanking) + ". " + Initials + " -- ") + ScoreString));
	}
}

void UTextWidget::SetData(int ranking, FString inits, int points)
{
	FString Zeroes = FString("");
	ScoreString = FString::FromInt(points);
	
	int MultipliedScore = points;
	
	while(ScoreString.Len() < 10)
	{
		if(MultipliedScore >= 1000000000)
		{
			break;
		}
		Zeroes += FString("0");
		ScoreString = FString(Zeroes + FString::FromInt(points));
		MultipliedScore *= 10;
	}

	TopTenRanking = ranking;
	Initials = inits;
	Score = points;
	Text->SetText(FText::FromString(FString(FString::FromInt(ranking) + ". " + inits + " -- ") + ScoreString));
	bCanUpdate = true;
}
