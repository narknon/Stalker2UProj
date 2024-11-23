#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "EffectPrototypeSID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FEffectPrototypeSID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID EffectSID;
    
    FEffectPrototypeSID();
};

