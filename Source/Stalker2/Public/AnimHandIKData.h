#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "AnimHandIKData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHandIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendArgs;
    
    FAnimHandIKData();
};

