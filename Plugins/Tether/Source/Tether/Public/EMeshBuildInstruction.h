#pragma once
#include "CoreMinimal.h"
#include "EMeshBuildInstruction.generated.h"

UENUM(BlueprintType)
enum EMeshBuildInstruction {
    DoNotBuild,
    BuildIfModified,
    AlwaysBuild,
};

