#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerPU.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerPU : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerPU();

    UFUNCTION(BlueprintCallable, Exec)
    void XStopProcPopup();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStartProcPopup();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowPopup(const int32 ButtonsNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowDemoPopup();
    
};

