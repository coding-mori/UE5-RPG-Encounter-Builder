// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EncounterBuilderEditor : ModuleRules
{
	public EncounterBuilderEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
				"CoreUObject",
				"Engine",
				"EncounterBuilderRuntime"
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "UnrealEd",
				"Slate",
				"SlateCore",
				"EditorStyle",
				"WorkspaceMenuStructure"
            }
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
