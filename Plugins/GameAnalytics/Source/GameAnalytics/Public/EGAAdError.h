#pragma once
#include "CoreMinimal.h"
#include "EGAAdError.generated.h"

UENUM(BlueprintType)
enum class EGAAdError : uint8 {
    undefined,
    unknown,
    offline,
    nofill,
    internalerror,
    invalidrequest,
    unabletoprecache,
};

