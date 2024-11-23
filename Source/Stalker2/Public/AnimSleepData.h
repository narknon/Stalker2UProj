#pragma once
#include "CoreMinimal.h"
#include "AnimSleepData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimSleepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSleep;
    
    FAnimSleepData();
};

