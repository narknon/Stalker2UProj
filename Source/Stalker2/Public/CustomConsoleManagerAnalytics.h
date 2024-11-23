#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerAnalytics.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerAnalytics : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAnalytics();

    UFUNCTION(BlueprintCallable, Exec)
    void XAnalyticsPrintLocalTotals();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAnalyticsPrintLocalKills();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAnalyticsPrintGlobalTotals();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAnalyticsPrintGlobalKills();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAnalyticsPrintDeaths();
    
};

