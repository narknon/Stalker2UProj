#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerSS.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerSS : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerSS();

    UFUNCTION(BlueprintCallable, Exec)
    void XALifeKillAll() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XALifeEnable() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XALifeDisable() const;
    
};

