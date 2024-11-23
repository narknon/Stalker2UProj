#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FogParams.generated.h"

USTRUCT(BlueprintType)
struct FFogParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Density;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Height;
    
    STALKER2_API FFogParams();
};

