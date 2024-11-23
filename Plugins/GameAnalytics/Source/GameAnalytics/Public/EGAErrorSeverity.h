#pragma once
#include "CoreMinimal.h"
#include "EGAErrorSeverity.generated.h"

UENUM(BlueprintType)
enum class EGAErrorSeverity : uint8 {
    undefined,
    debug,
    info,
    warning,
    error,
    critical,
};

