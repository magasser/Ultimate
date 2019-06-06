// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UltimateGameMode.h"
#include "UltimateCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "UltimateGameState.h"

AUltimateGameMode::AUltimateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PointsToWin = 5;
}

void AUltimateGameMode::OnTargetHit()
{
	if (AUltimateGameState* GS = Cast<AUltimateGameState>(GameState))
	{
		GS->Points++;

		if (GS->Points >= PointsToWin)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("You won the game! It took you %f seconds to win the game"), GetWorld()->GetTimeSeconds()));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("You scored a point. You now have %d points"), GS->Points));
		}
	}
}
