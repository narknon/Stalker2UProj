#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerEG.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerEG : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerEG();

    UFUNCTION(BlueprintCallable, Exec)
    void XGarbageCollector() const;
    
};

