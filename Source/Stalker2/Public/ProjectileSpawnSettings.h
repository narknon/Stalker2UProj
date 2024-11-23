#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ProjectileSpawnSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=ProjectileSpawn)
class STALKER2_API UProjectileSpawnSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileAmountRefreshRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileActiveKeepTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileDesiredPreHeatTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileExtraPreHeatShots;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileSpawnPerFrameAmount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDestroyedProjectilesPerFrame;
    
    UProjectileSpawnSettings();

};

