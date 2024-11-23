#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "PlatformManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class STALKER2_API UPlatformManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputStorySize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlatformSwitchingThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlatformSwitchingThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchToOtherDeviceOnConnect;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMouseFeatures;
    
public:
    UPlatformManager();

};

