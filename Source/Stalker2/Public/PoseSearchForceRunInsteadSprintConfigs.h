#pragma once
#include "CoreMinimal.h"
#include "PoseSearchForceRunInsteadSprintConfigs.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchForceRunInsteadSprintConfigs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromPathStart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToPathEnd;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToNextPortal;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PortalRotationAngleThreshold;
    
    STALKER2_API FPoseSearchForceRunInsteadSprintConfigs();
};

