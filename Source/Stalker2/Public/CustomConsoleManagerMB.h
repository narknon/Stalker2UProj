#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerMB.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerMB : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerMB();

    UFUNCTION(BlueprintCallable, Exec)
    void XToggleShowTriggerCapsuleView() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleShowProtection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleShowPlayerRequestedMainHandWeaponType();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleShowPlayerLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleShowPlayerLastHeldItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleShowModels();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleShowLightningBallAnomalyDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDebugExpulsionAnomaly() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSwitchAnomalySpawnerPreset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetDrawDebugExplosion(const bool bDebug, const float DebugTime);
    
};

