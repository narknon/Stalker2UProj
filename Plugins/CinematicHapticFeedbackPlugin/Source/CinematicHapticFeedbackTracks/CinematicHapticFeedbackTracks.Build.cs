using UnrealBuildTool;

public class CinematicHapticFeedbackTracks : ModuleRules {
    public CinematicHapticFeedbackTracks(ReadOnlyTargetRules Target) : base(Target) {
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
