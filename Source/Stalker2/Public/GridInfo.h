#pragma once
#include "CoreMinimal.h"
#include "GridInfo.generated.h"

USTRUCT(BlueprintType)
struct FGridInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GridName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OverrideStreamingDistance;
    
    STALKER2_API FGridInfo();
};

