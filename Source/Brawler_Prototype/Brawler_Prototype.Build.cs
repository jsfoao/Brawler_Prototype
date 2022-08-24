// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Brawler_Prototype : ModuleRules
{
	public Brawler_Prototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
