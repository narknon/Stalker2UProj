#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "WorldCompositionAnalyzer.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UWorldCompositionAnalyzer : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UWorldCompositionAnalyzer();

private:
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
};

