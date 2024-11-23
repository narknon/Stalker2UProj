using UnrealBuildTool;

public class CinematicRazerChromaTracks : ModuleRules {
    public CinematicRazerChromaTracks(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicKeyFrameTracks",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "MovieScene",
        });
    }
}
