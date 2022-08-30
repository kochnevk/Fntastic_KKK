// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Fntstc_KKK : ModuleRules
{
	public Fntstc_KKK(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
