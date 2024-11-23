#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerVV.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerVV : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerVV();

    UFUNCTION(BlueprintCallable, Exec)
    void XGiveWeaponWithAttaches();
    
};

