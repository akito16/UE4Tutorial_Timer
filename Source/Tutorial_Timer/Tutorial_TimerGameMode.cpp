// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tutorial_TimerGameMode.h"
#include "Tutorial_TimerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutorial_TimerGameMode::ATutorial_TimerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
