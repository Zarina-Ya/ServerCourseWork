// Copyright Epic Games, Inc. All Rights Reserved.

#include "ServerCourseWorkGameMode.h"
#include "ServerCourseWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AServerCourseWorkGameMode::AServerCourseWorkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
