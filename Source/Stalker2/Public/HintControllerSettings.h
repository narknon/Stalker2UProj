#pragma once
#include "CoreMinimal.h"
#include "AdvancedControllerSettings.h"
#include "EMappingContext.h"
#include "HintControllerSettings.generated.h"

USTRUCT(BlueprintType)
struct FHintControllerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomInputIconName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappingContext MappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdvancedControllerSettings GamepadAdvancedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdvancedControllerSettings KeyboardAdvancedSettings;
    
    STALKER2_API FHintControllerSettings();
};

