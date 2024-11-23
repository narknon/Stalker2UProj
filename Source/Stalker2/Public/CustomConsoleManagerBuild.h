#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerBuild.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerBuild : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerBuild();

    UFUNCTION(BlueprintCallable, Exec)
    void XSpawnItemNearPlayerBySID(const FString& ItemPrototypeSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSpawnItemInCoordinatesBySID(const FString& ItemPrototypeSID, float Px, float Py, float Pz) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPlayerCoordinates() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetPlayerSpeedMultiplier(float SpeedMultiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetNoClipGSC(bool bNoClipGSC, float Speed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetGodModeByUID(int32 EntityUID, bool bGodModeState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetGodModeAllFactions(bool bGodModeState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetFreeCameraSpeedMultiplier(float SpeedMultiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetFactionGodMode(const FString& CurrentFactionSelector, bool bGodModeState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetEntityUnkillableByUID(int32 EntityUID, bool bGodModeState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XResetCurrentWeaponDurabilityToZero();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XResetCurrentBodyArmorDurabilityToZero();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XRepairCurrentWeapon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDisplayFocusingPlayerEnemiesCount();
    
};

