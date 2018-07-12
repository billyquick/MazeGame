// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MazeGameGameMode.h"
#include "MazeGameHUD.h"
#include "MazeGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMazeGameGameMode::AMazeGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMazeGameHUD::StaticClass();
}
