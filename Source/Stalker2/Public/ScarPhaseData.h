#pragma once
#include "CoreMinimal.h"
#include "AbilityPrototypeSID.h"
#include "EffectPrototypeSID.h"
#include "ScarPhaseData.generated.h"

USTRUCT(BlueprintType)
struct FScarPhaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectPrototypeSID> EffectsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectPrototypeSID> EffectsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityPrototypeSID> AbilitiesToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhaseHPThreshold;
    
    STALKER2_API FScarPhaseData();
};

