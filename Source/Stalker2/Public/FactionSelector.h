#pragma once
#include "CoreMinimal.h"
#include "FactionSelector.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FFactionSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> AllowedFactionsFilter;
    
    FFactionSelector();
};

