#pragma once
#include "CoreMinimal.h"
#include "LightShaftsState.h"
#include "LightState.h"
#include "DirectionalLightState.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalLightState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightState Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightShaftsState LightShafts;
    
    STALKER2_API FDirectionalLightState();
};

