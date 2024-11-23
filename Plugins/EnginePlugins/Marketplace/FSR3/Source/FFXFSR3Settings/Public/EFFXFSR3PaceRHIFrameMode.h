#pragma once
#include "CoreMinimal.h"
#include "EFFXFSR3PaceRHIFrameMode.generated.h"

UENUM()
enum class EFFXFSR3PaceRHIFrameMode : int32 {
    None,
    CustomPresentVSync,
};

