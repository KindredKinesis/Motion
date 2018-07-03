// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MotionGameMode.h"
#include "MotionHUD.h"
#include "MotionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMotionGameMode::AMotionGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMotionHUD::StaticClass();
}
