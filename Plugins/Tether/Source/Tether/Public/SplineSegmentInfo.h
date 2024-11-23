#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SplineSegmentInfo.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FSplineSegmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLeaveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndArriveTangent;
    
    FSplineSegmentInfo();
};

