#pragma once
#include "CoreMinimal.h"
#include "ETetherSimulationTimingMode.generated.h"

UENUM(BlueprintType)
enum class ETetherSimulationTimingMode : uint8 {
    SimulateInSequence,
    ProgressSimulation,
};

