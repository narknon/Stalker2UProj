#pragma once
#include "CoreMinimal.h"
#include "InteractionData.generated.h"

USTRUCT(BlueprintType)
struct FInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InteractableTextToolAction;
    
    STALKER2_API FInteractionData();
};

