#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "PostProcessState.generated.h"

USTRUCT(BlueprintType)
struct FPostProcessState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatParameter DiffuseColorBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatParameter SkylightLeaking;
    
    STALKER2_API FPostProcessState();
};

