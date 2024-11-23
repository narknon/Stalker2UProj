#pragma once
#include "CoreMinimal.h"
#include "Parameter.h"
#include "LinearColorParameter.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FLinearColorParameter : public FParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* Curve;
    
    STALKER2_API FLinearColorParameter();
};

