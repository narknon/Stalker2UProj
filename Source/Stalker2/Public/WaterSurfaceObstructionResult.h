#pragma once
#include "CoreMinimal.h"
#include "WaterSurfaceObstructionResult.generated.h"

USTRUCT(BlueprintType)
struct FWaterSurfaceObstructionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObstructed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceToWater;
    
    STALKER2_API FWaterSurfaceObstructionResult();
};

