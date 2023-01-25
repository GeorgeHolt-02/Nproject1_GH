// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyWaveSpline.h"

// Sets default values
UEnemyWaveSpline::UEnemyWaveSpline()
{
	//EnemyReferences.Empty();
	EnemyReferences.Init(EnemyBP, GetNumberOfSplinePoints());
}
