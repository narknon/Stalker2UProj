#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerGA.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerGA : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerGA();

    UFUNCTION(BlueprintCallable, Exec)
    void XToggleAnalyticsTracking_Player(const bool bTracking) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowAnalyticsUserId() const;
    
};

