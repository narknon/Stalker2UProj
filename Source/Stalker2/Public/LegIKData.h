#pragma once
#include "CoreMinimal.h"
#include "LegIKData.generated.h"

USTRUCT(BlueprintType)
struct FLegIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootSocketName;
    
    STALKER2_API FLegIKData();
};

