// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Nomix_Test : ModuleRules
{
	public Nomix_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
