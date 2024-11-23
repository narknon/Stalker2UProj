#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "WeaponPushbackContainer.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FWeaponPushbackContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeBlendStarting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs BlendInArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs BlendOutArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* PushbackRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* PushbackTranslationCurve;
    
    STALKER2_API FWeaponPushbackContainer();
};

