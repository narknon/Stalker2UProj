#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerPS.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerPS : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerPS();

    UFUNCTION(BlueprintCallable, Exec)
    void XShowInventoryDebugItmesStats(const bool bShow) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XChangeInventoryScroll(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XChangeCompasMarkers(int32 Index) const;
    
};

