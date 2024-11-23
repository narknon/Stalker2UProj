#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerAK.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerAK : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAK();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleAutoSaveEachFrame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestST162667() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestDangling() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSuicide() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSaveObjListToFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XPrintModelCapacity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XPrintInventory(int32 UnitUID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XKillThemAll() const;
    
};

