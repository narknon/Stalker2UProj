#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "InteractObject.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FInteractObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID PrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumedOnUse;
    
    FInteractObject();
};

