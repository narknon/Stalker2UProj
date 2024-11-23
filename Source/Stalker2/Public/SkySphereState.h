#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "LinearColorParameter.h"
#include "SkySphereState.generated.h"

USTRUCT(BlueprintType)
struct FSkySphereState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatParameter AtmosphereBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatParameter EmissiveBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColorParameter ZenithColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColorParameter HorizonColor;
    
    STALKER2_API FSkySphereState();
};

