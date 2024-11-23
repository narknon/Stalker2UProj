#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameGraphContextualAction.generated.h"

USTRUCT(BlueprintType)
struct FGameGraphContextualAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid QuestGuid;
    
    STALKER2_API FGameGraphContextualAction();
};

