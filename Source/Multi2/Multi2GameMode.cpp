// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multi2GameMode.h"
#include "Multi2Character.h"
#include "UObject/ConstructorHelpers.h"

AMulti2GameMode::AMulti2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
