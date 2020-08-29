// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GardenWitchGameGameMode.h"
#include "GardenWitchGameHUD.h"
#include "GardenWitchGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGardenWitchGameGameMode::AGardenWitchGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGardenWitchGameHUD::StaticClass();
}
