// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MapGenerateHelper.generated.h"

/**
 * 
 */
UCLASS()
class FINALPROJECT_API UMapGenerateHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "MapGeneratorHelper")
		static TArray<FVector> calculate_map_location();
	
};
