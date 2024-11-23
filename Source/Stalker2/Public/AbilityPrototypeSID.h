#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "AbilityPrototypeSID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAbilityPrototypeSID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID AbilitySID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivationTag;
    
    FAbilityPrototypeSID();
};

