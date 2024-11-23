#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PoseSearch/PoseSearchLibrary.h"
#include "PoseSearchLocomotionMovementSettings.h"
#include "PoseSearchLocomotionTrajectorySettings.h"
#include "PoseSearchLocomotionSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class POSESEARCHLOCOMOTION_API UPoseSearchLocomotionSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionMatchingSettings MotionMatchingSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchLocomotionTrajectorySettings TrajectorySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchLocomotionMovementSettings MovementSettings;
    
public:
    UPoseSearchLocomotionSettings();

};

