#pragma once
#include "CoreMinimal.h"
#include "EAnimationType.generated.h"

UENUM(BlueprintType)
enum class EAnimationType : uint8 {
    ClimbAnimationEnded,
    ExitLadder,
    FocusCameraCenter,
    StartJumpFall,
};

