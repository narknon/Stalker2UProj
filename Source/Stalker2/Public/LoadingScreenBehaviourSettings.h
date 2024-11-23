#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenBehaviourSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FLoadingScreenBehaviourSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumLoadingScreenDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCompleteWhenLoadingComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForManualStop;
    
    FLoadingScreenBehaviourSettings();
};

