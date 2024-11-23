#pragma once
#include "CoreMinimal.h"
#include "Parameter.h"
#include "FloatParameter.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FFloatParameter : public FParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    STALKER2_API FFloatParameter();
};

