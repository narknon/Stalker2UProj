#pragma once
#include "CoreMinimal.h"
#include "EWeather.h"
#include "ParameterTransition.h"
#include "Parameter.generated.h"

USTRUCT(BlueprintType)
struct FParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeather, FParameterTransition> TransitionOverrides;
    
    STALKER2_API FParameter();
};

