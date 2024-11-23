#pragma once
#include "CoreMinimal.h"
#include "FloatValueLocalisationPair.generated.h"

USTRUCT(BlueprintType)
struct FFloatValueLocalisationPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Loc10N;
    
    STALKER2_API FFloatValueLocalisationPair();
};

