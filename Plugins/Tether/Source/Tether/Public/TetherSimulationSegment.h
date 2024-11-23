#pragma once
#include "CoreMinimal.h"
#include "SplineSegmentInfo.h"
#include "TetherSimulationParticle.h"
#include "TetherSimulationSegment.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FTetherSimulationSegment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SegmentUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineSegmentInfo SplineSegmentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTetherSimulationParticle> Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulationTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvalidated;
    
public:
    FTetherSimulationSegment();
};

