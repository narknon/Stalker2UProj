#pragma once
#include "CoreMinimal.h"
#include "PoseSearchLocomotionTrajectorySettings.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchLocomotionTrajectorySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HistoryExpirationSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> HistoryExpirationSecondsByAgent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionTimeSeconds;
    
    POSESEARCHLOCOMOTION_API FPoseSearchLocomotionTrajectorySettings();
};

