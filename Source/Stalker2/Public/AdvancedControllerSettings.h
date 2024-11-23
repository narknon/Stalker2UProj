#pragma once
#include "CoreMinimal.h"
#include "AdvancedControllerSettings.generated.h"

USTRUCT(BlueprintType)
struct FAdvancedControllerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MappingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerIndex;
    
    STALKER2_API FAdvancedControllerSettings();
};

