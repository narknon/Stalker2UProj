using UnrealBuildTool;

public class Stalker2GameTarget : TargetRules {
	public Stalker2GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"MediaIOCore",
			"SRLEAsset",
			"Stalker2",
		});
	}
}
