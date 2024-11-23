#pragma once
#include "CoreMinimal.h"
#include "SlotFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct FSlotFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterIconStyleIdEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterIconStyleIdDisable;
    
    STALKER2_API FSlotFilterSettings();
};

