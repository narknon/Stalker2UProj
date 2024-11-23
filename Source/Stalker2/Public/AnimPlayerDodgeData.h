#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerDodgeData.generated.h"

class AObj;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerDodgeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AObj*> CollidedObjects;
    
    FAnimPlayerDodgeData();
};

