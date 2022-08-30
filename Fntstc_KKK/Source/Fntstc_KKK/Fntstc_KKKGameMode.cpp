// Copyright Epic Games, Inc. All Rights Reserved.

#include "Fntstc_KKKGameMode.h"
#include "Fntstc_KKKCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFntstc_KKKGameMode::AFntstc_KKKGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
