#pragma once
#include "CoreMinimal.h"
#include "EGAProgressionStatus.generated.h"

UENUM(BlueprintType)
enum class EGAProgressionStatus : uint8 {
    undefined,
    start,
    complete,
    fail,
};

