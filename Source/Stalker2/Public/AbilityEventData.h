#pragma once
#include "CoreMinimal.h"
#include "EAbility.h"
#include "GameplayEventData.h"
#include "AbilityEventData.generated.h"

UCLASS(Blueprintable)
class UAbilityEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    UAbilityEventData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActivationTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAbility GetAbilityType() const;
    
};

