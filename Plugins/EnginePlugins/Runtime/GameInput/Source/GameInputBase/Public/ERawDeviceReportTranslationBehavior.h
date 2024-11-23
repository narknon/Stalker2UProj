#pragma once
#include "CoreMinimal.h"
#include "ERawDeviceReportTranslationBehavior.generated.h"

UENUM(BlueprintType)
enum class ERawDeviceReportTranslationBehavior : uint8 {
    TreatAsTrigger,
    TreatAsAnalog,
    TreatAsButton,
    TreatAsButtonBitmask,
    TreatAsPackedAxisPair,
};

