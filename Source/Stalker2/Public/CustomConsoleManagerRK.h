#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "EAgentType.h"
#include "EDamageType.h"
#include "EHUDElements.h"
#include "ERank.h"
#include "EVitalType.h"
#include "CustomConsoleManagerRK.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerRK : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerRK();

    UFUNCTION(BlueprintCallable, Exec)
    void XUnlockDoor(int32 DoorUID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTogglePsyPhantomDebugMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTogglePlayerRadiationSphereVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleNPCFlashlight(int32 UID);
    
    UFUNCTION(Exec)
    void XToggleHUDElements(EHUDElements ElementsToHide);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleFreeCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDrawPlayerStats(float ValueFontXSizeCoef, float ValueFontYSizeCoef);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDrawInteractNPCStats(const float ValueFontXSizeCoef, const float ValueFontYSizeCoef);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDrawCurrentDiscounts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDetailedVitalsStat(EVitalType VitalType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTeleportToObjUID(int32 ObjUID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTeleportTo(float XCoord, float YCoord, float ZCoord) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStopBenchmark();
    
    UFUNCTION(Exec)
    void XStartGSCBackgroundProfiler(float MsecThreshold, float RamMBThreshold, uint32 InFramesToCaptureOnSpike, uint32 InFrameCountToComputeAverage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStartBenchmark(float CameraHeight, float CircleRadius, float InitialPitch, float InitialYaw, int32 BenchRuns, bool bProfileCsv);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSpawnPsyNPC(const bool bIsPsyPhantom, const FString& ObjPrototypeSID, const ERank Rank, const int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSpawnObjBySID(const FString& PrototypeSID, ERank Rank, bool bDestroyOnOffline, float Px, float Py, float Pz, float Pitch, float Yaw, float Roll) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    int32 XSpawnItemContainer(const FString& PrototypeID, float Px, float Py, float Pz, int32 Gold, float Pitch, float Yaw, float Roll) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetWeatherLocked(const bool bNowLocked);
    
    UFUNCTION(Exec)
    void XSetPsyNPCFilterParams(const bool bIsPsyPhantom, const EAgentType AgentType1, const EAgentType AgentType2, const FString& ObjPrototypeFilter1, const FString& ObjPrototypeFilter2, const FString& ObjPrototypeFilter3);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetGodModeForInteractObj(bool bGodMode) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetGodMode(bool bGodMode) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetGlobalObjectPath(const FString& SID, const FString& InValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetGlobalBool(const FString& SID, bool InValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XRevertUpgradeBySID(const FString& ItemPrototypeSID, const FString& UpgradePrototypeSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XOpenDoor(int32 DoorUID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XObjRecalcAllEquipment(int32 ObjUID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XObjRecalcAllCachedStats(int32 ObjUID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XModifyStamina(int32 TargetUID, float FPSpent) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XModifyBleeding(int32 TargetUID, int32 AddBleeding) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XIncreaseEnsuresLimit(int32 IncreaseLimit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XForceActorInteract(int32 ActorUID, int32 InteractableUID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XFileExists(const FString& FilePath) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDrawPsyFieldVolumes(bool bInDrawPsyField);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDisassemblyCurrentWeapon() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDisableFrictionForPlayerInBulb(bool bInDrawBulbDebug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDealDurabilityDamage(int32 ItemUID, float DurabilityDamage) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDealDamage(int32 TargetUID, float Damage, float ArmorDamage, float ArmorPiercing, float Bleeding, float BleedingChanceIncrement, EDamageType Type, const FString& BoneHit) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XCreateItemInInventoryByID(const FString& PrototypeID, int32 ObjUID, int32 Count, float Durability) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XApplyUpgradeBySID(const FString& ItemPrototypeSID, const FString& UpgradePrototypeSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XApplyEffectOnPlayer(const FString& EffectPrototypeSID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XApplyEffectOnNPCByUID(const FString& EffectPrototypeSID, const int32 UID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XApplyEffectOnInteractNPC(const FString& EffectPrototypeSID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TransformUID(int32 UID);
    
};

