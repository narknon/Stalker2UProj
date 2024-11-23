#pragma once
#include "CoreMinimal.h"
#include "CutsceneBlinkConfig.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FCutsceneBlinkConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeInterval;
    
    FCutsceneBlinkConfig();
};

