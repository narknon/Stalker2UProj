#pragma once
#include "CoreMinimal.h"
#include "VortexSplineDataPoint.generated.h"

USTRUCT(BlueprintType)
struct FVortexSplineDataPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointIndex;
    
    STALKER2_API FVortexSplineDataPoint();
};

