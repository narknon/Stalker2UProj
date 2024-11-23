#pragma once
#include "CoreMinimal.h"
#include "ParameterTransition.generated.h"

USTRUCT(BlueprintType)
struct FParameterTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    STALKER2_API FParameterTransition();
};

