#pragma once
#include "CoreMinimal.h"
#include "HumanTransitionAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FHumanTransitionAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransitionTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransitionFrom;
    
    STALKER2_API FHumanTransitionAnimations();
};

