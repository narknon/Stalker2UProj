#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimPlayerShadowData.h"
#include "AnimPlayerStateData.h"
#include "AnimInstancePlayerShadow.generated.h"

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstancePlayerShadow : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerShadowData ShadowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerStateData StateData;
    
public:
    UAnimInstancePlayerShadow();

};

