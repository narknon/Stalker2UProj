#pragma once
#include "CoreMinimal.h"
#include "GameAnalyticsCustomEventField.generated.h"

USTRUCT(BlueprintType)
struct FGameAnalyticsCustomEventField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    GAMEANALYTICS_API FGameAnalyticsCustomEventField();
};

