#pragma once
#include "CoreMinimal.h"
#include "EGAResourceFlowType.generated.h"

UENUM(BlueprintType)
enum class EGAResourceFlowType : uint8 {
    undefined,
    source,
    sink,
};

