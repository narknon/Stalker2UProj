#pragma once
#include "CoreMinimal.h"
#include "LinearColorParameter.h"
#include "LightShaftsState.generated.h"

USTRUCT(BlueprintType)
struct FLightShaftsState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColorParameter BloomTint;
    
    STALKER2_API FLightShaftsState();
};

