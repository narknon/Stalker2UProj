#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AlphaBlend.h"
#include "AnimNotifyState_FOVBlend.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STALKER2_API UAnimNotifyState_FOVBlend : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption BlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBlendWeaponInHands;
    
    UAnimNotifyState_FOVBlend();

};

