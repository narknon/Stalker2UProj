#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EKeyCategory.h"
#include "VictoryInputAxis.generated.h"

USTRUCT(BlueprintType)
struct FVictoryInputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyAsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyCategory Category;
    
    STALKER2_API FVictoryInputAxis();
};

