#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SecuritySettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class STALKER2_API USecuritySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Watermark;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayWatermark;
    
public:
    USecuritySettings();

};

