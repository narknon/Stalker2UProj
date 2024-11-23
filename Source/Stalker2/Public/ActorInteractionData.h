#pragma once
#include "CoreMinimal.h"
#include "ActorInteractionData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FActorInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InteractableTextToolName;
    
    FActorInteractionData();
};

