#pragma once
#include "CoreMinimal.h"
#include "EMappingContext.h"
#include "ActionMimicSettings.generated.h"

USTRUCT(BlueprintType)
struct FActionMimicSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappingContext MappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerIndex;
    
    STALKER2_API FActionMimicSettings();
};

