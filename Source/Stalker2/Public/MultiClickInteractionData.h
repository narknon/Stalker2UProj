#pragma once
#include "CoreMinimal.h"
#include "InteractionData.h"
#include "MultiClickInteractionData.generated.h"

USTRUCT(BlueprintType)
struct FMultiClickInteractionData : public FInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClickPercentageIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotDecrease;
    
    STALKER2_API FMultiClickInteractionData();
};

