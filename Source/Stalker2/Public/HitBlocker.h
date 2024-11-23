#pragma once
#include "CoreMinimal.h"
#include "HitBlocker.generated.h"

USTRUCT(BlueprintType)
struct FHitBlocker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPiercing;
    
    STALKER2_API FHitBlocker();
};

