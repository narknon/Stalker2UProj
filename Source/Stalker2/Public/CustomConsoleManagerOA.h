#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerOA.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerOA : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerOA();

    UFUNCTION(BlueprintCallable, Exec)
    void XPlayVideo(const FString& Path) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XNewDLCAvailable() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XIsHDREnabled() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XHasDLC(const FName DLCName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XGetActiveDLC() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDebugAudioScattererMap(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDebugAudioScattererEvents(const bool bEnabled, const float DrawTime);
    
};

