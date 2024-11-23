#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerMH.generated.h"

UCLASS(Blueprintable)
class UCustomConsoleManagerMH : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerMH();

    UFUNCTION(BlueprintCallable, Exec)
    void XToggleSoapBubbleDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleHubDoors(const bool bLocked, const float Radius);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDrawPlayerShootingDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDrawPlayerRecoilDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDrawPlayerDispersionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDrawAIShootingDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleCustomFov(const bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetFov(const float FOV);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XRemoveEffectFromPlayer(const FString& EffectPrototypeSID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XApplyMainHandWeaponUpgradeBySID(const FString& UpgradePrototypeSID) const;
    
};

