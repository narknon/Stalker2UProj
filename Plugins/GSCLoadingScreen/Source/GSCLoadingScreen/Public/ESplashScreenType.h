#pragma once
#include "CoreMinimal.h"
#include "ESplashScreenType.generated.h"

UENUM(BlueprintType)
enum class ESplashScreenType : uint8 {
    None,
    Image,
    Disclaimer,
};

