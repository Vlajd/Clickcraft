// Copyright Epic Games, Inc. All Rights Reserved.


#include "ClickcraftGameModeBase.h"

#include "HAL/FileManagerGeneric.h"

void AClickcraftGameModeBase::SetSavedDir(FString input)
{
	dir = input + "Screenshots/Windows/";
}

TArray<FString> AClickcraftGameModeBase::GetFilenames()
{
	TArray<FString> output;
	output.Empty();
	if (FPaths::DirectoryExists(dir))
	{
		FString path = dir + "*.png";
		FFileManagerGeneric::Get().FindFiles(output, *path, true, false);
		for (int i = 0; i < output.Num(); i++)
		{
			output[i] = dir + output[i];
		}
	}
	return output;
}

