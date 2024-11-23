#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "EGrenadeDebugFlag.h"
#include "CustomConsoleManagerPA.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerPA : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerPA();

    UFUNCTION(BlueprintCallable, Exec)
    void XTogglePhysicalMaterialDebug(float Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleHoldBreathDebug();
    
    UFUNCTION(Exec)
    void XToggleGrenadeDebug(EGrenadeDebugFlag FlagValue) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XChangePlayerMovementFXPrototype(const FString& PrototypeSID) const;
    
};

