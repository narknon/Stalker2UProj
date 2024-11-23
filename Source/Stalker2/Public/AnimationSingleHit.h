#pragma once
#include "CoreMinimal.h"
#include "AnimationSingleHit.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimationSingleHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitDirection;
    
    FAnimationSingleHit();
};

