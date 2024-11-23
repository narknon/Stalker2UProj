#pragma once
#include "CoreMinimal.h"
#include "HumanHitAnimations.generated.h"

class UBlendSpace1D;

USTRUCT(BlueprintType)
struct FHumanHitAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* UpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* LowerBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* LeftLeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* RightLeg;
    
    STALKER2_API FHumanHitAnimations();
};

