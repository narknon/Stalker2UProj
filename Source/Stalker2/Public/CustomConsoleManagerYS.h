#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerYS.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerYS : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerYS();

    UFUNCTION(BlueprintCallable, Exec)
    void XSpawnALifeDirectorScenario(const FString& ScenarioSID) const;
    
};

