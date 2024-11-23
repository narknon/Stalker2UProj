#pragma once
#include "CoreMinimal.h"
#include "ContextualActionsGameGraphInfo.generated.h"

USTRUCT(BlueprintType)
struct FContextualActionsGameGraphInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> GameGraphVertices;
    
    STALKER2_API FContextualActionsGameGraphInfo();
};

