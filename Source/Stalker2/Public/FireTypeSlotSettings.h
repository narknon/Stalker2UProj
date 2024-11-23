#pragma once
#include "CoreMinimal.h"
#include "FireTypeSlotSettings.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FFireTypeSlotSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* BackgroundTexture;
    
    STALKER2_API FFireTypeSlotSettings();
};

