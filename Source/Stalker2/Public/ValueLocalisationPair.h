#pragma once
#include "CoreMinimal.h"
#include "ValueLocalisationPair.generated.h"

USTRUCT(BlueprintType)
struct FValueLocalisationPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Loc10N;
    
    STALKER2_API FValueLocalisationPair();
};

