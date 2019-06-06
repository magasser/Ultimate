// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "UltimateGameState.generated.h"

/**
 * 
 */
UCLASS()
class ULTIMATE_API AUltimateGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	AUltimateGameState();

	int32 Points;

};
