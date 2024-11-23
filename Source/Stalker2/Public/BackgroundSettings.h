#pragma once
#include "CoreMinimal.h"
#include "BackgroundSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FBackgroundSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    STALKER2_API FBackgroundSettings();
};

