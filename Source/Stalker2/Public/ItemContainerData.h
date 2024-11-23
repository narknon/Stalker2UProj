#pragma once
#include "CoreMinimal.h"
#include "ActorInteractionData.h"
#include "ItemContainerData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FItemContainerData : public FActorInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUpgrade;
    
    FItemContainerData();
};

