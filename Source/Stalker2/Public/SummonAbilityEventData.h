#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEventData.h"
#include "SummonAbilityEventData.generated.h"

UCLASS(Blueprintable)
class USummonAbilityEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    USummonAbilityEventData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSpawnEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetSummonLocations() const;
    
};

