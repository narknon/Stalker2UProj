#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "InteractEffectData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FInteractEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID PrototypeSID;
    
    FInteractEffectData();
};

