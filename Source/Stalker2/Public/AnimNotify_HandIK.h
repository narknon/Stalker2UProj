#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "AnimNotifyBase.h"
#include "EAnimationHands.h"
#include "AnimNotify_HandIK.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_HandIK : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationHands HandToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSetStartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption BlendOption;
    
    UAnimNotify_HandIK();

};

