#pragma once
#include "CoreMinimal.h"
#include "TetherSegmentSimulationOptions.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FTetherSegmentSimulationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFixedAnchorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSplineTangents;
    
    FTetherSegmentSimulationOptions();
};

