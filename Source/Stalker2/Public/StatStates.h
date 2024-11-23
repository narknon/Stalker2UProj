#pragma once
#include "CoreMinimal.h"
#include "StatStates.generated.h"

USTRUCT(BlueprintType)
struct FStatStates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strong;
    
    STALKER2_API FStatStates();
};

