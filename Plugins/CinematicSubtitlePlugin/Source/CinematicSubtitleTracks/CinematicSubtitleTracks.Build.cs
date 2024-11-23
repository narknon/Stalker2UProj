using UnrealBuildTool;

public class CinematicSubtitleTracks : ModuleRules {
    public CinematicSubtitleTracks(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicKeyFrameTracks",
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
        });
    }
}
