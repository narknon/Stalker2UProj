#pragma once
#include "CoreMinimal.h"
#include "PoseSearchForceRunInsteadSprintConfigs.h"
#include "PoseSearchMovementTagConfigs.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchMovementTagConfigs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchForceRunInsteadSprintConfigs ForceRunInsteadSprintConfigs;
    
    STALKER2_API FPoseSearchMovementTagConfigs();
};

