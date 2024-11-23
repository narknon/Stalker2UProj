#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "InteractObjectData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FInteractObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID PrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurability;
    
    FInteractObjectData();
};

