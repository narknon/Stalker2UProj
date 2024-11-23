#pragma once
#include "CoreMinimal.h"
#include "EGAAdAction.generated.h"

UENUM(BlueprintType)
enum class EGAAdAction : uint8 {
    undefined,
    clicked,
    show,
    failedshow,
    rewardreceived,
    request,
    loaded,
};

