#pragma once
#include "CoreMinimal.h"
#include "ALifeScenarioGroupSIDSelector.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FALifeScenarioGroupSIDSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FALifeScenarioGroupSIDSelector();
};

