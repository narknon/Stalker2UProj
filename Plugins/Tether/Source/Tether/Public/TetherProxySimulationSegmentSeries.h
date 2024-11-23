#pragma once
#include "CoreMinimal.h"
#include "TetherSimulationSegmentSeries.h"
#include "TetherProxySimulationSegmentSeries.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FTetherProxySimulationSegmentSeries : public FTetherSimulationSegmentSeries {
    GENERATED_BODY()
public:
    FTetherProxySimulationSegmentSeries();
};

