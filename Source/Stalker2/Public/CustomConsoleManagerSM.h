#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerSM.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerSM : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerSM();

    UFUNCTION(BlueprintCallable, Exec)
    void XSVFriendlyFire(bool bEnabled) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStopEmission() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStartEmissionBySID(const FString& PrototypeSID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStartEmission() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowProjectileTrajectory(bool bShow) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XResumeScheduledEmission() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XPauseScheduledEmission() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XGetEmissionState() const;
    
};

