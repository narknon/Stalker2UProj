#pragma once
#include "CoreMinimal.h"
#include "TetherSegmentSimulationOptions.h"
#include "TetherSegmentSimulationParams.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FTetherSegmentSimulationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSimulateSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherSegmentSimulationOptions SimulationOptions;
    
    FTetherSegmentSimulationParams();
};

