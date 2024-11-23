#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "ERank.h"
#include "CustomConsoleManagerIK.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerIK : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerIK();

    UFUNCTION(BlueprintCallable, Exec)
    void XSwitchPlayerRank(const ERank Rank) const;
    
    UFUNCTION(Exec)
    void XSkipTimeHours(const uint32 Hours) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSignalStrengthTest() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetTwelveHourTime(const bool bSet) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XInputActionUnlock(const FString& IAName, const FString& IMCName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XInputActionBlock(const FString& IAName, const FString& IMCName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XBluePrintSearch() const;
    
};

