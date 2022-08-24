// Copyright Epic Games, Inc. All Rights Reserved.

#include "Brawler_PrototypeGameMode.h"
#include "Brawler_PrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABrawler_PrototypeGameMode::ABrawler_PrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
