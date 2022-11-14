// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGenerateHelper.h"

TArray<FVector> UMapGenerateHelper::calculate_map_location()
{
	TArray<FVector> result;
	result.SetNum(4);
	FVector d1 = { 1750.0, 0.0, 0.0 };
	FVector d2 = { 0.0, 1750.0, 0.0 };
	FVector initial = { 0, 0, 0 };

	TArray<int> position = { 0,1,3,4};

	for (int i = 0; i < 4; i++) {
		int x = position[i] % 3;
		int y = position[i] / 3;
		result[i] = initial + x * d1 + y * d2;

	}

	return result;
}


