#pragma once
#include "CoreMinimal.h"
#include "IntInterval.generated.h"

USTRUCT(BlueprintType)
struct FIntInterval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    STALKER2_API FIntInterval();
};

