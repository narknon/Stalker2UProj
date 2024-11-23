#pragma once
#include "CoreMinimal.h"
#include "EKnockedDownState.h"
#include "AnimKnockDownData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimKnockDownData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKnockedDownState KnockedDownState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStillKnockedDown;
    
    FAnimKnockDownData();
};

