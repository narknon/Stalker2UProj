#pragma once
#include "CoreMinimal.h"
#include "EMappingContext.h"
#include "MenuHintSettings.generated.h"

USTRUCT(BlueprintType)
struct FMenuHintSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappingContext MappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyboardAndMouseMappingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GamepadMappingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerIndex;
    
    STALKER2_API FMenuHintSettings();
};

