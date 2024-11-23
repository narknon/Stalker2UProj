#pragma once
#include "CoreMinimal.h"
#include "InteractionData.h"
#include "HoldInteractionData.generated.h"

USTRUCT(BlueprintType)
struct FHoldInteractionData : public FInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotDecrease;
    
    STALKER2_API FHoldInteractionData();
};

