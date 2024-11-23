#pragma once
#include "CoreMinimal.h"
#include "PostProcessSimplifiedSettings.h"
#include "AbilityCamModifierStage.generated.h"

USTRUCT(BlueprintType)
struct FAbilityCamModifierStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostProcessBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSimplifiedSettings PostProcessSettings;
    
    STALKER2_API FAbilityCamModifierStage();
};

