#pragma once
#include "CoreMinimal.h"
#include "ContextualActionGlobalVariablePrototypeSID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FContextualActionGlobalVariablePrototypeSID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FContextualActionGlobalVariablePrototypeSID();
};

