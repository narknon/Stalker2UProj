#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerMP.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerMP : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerMP();

    UFUNCTION(BlueprintCallable, Exec)
    void XWeaponDrag(const int32 ModelUID, const float Delay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTriggerAutoSave() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleLogLoadingProgress() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleDebugAimAssist();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStartSleep() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetClosestFaustCloneSwitchValue(const float SearchRadius, const float SwitchValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetArtifactSpawnLuck(const float LuckValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetAimAssistEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XLoadLastSave() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XEnableLegsIK();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDisplayArtifactSpawnLuckStatus(const FString& ArtifactSpawnerSID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDisableLegsIK();
    
};

