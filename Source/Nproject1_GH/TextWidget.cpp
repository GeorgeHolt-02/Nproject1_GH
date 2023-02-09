// Fill out your copyright notice in the Description page of Project Settings.


#include "TextWidget.h"

#include "Components/TextBlock.h"

void UTextWidget::SetData(int ranking, FString inits, int points)
{
	FString Zeroes = FString("");
	FString ScoreString = FString::FromInt(points);
	
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

	Text->SetText(FText::FromString(FString(FString::FromInt(ranking) + ". " + inits + " -- ") + ScoreString));
}
