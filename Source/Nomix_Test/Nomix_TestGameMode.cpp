// Copyright Epic Games, Inc. All Rights Reserved.

#include "Nomix_TestGameMode.h"
#include "Nomix_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANomix_TestGameMode::ANomix_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
