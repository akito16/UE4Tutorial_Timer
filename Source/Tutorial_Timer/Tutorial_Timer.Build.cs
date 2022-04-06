// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tutorial_Timer : ModuleRules
{
	public Tutorial_Timer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
