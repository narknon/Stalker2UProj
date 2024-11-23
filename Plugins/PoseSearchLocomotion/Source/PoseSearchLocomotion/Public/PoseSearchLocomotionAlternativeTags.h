#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PoseSearchLocomotionAlternativeTags.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchLocomotionAlternativeTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
    POSESEARCHLOCOMOTION_API FPoseSearchLocomotionAlternativeTags();
};

