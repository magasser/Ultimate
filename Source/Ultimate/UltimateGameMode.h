// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UltimateGameMode.generated.h"

UCLASS(minimalapi)
class AUltimateGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUltimateGameMode();

	void OnTargetHit();

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 PointsToWin;
};



