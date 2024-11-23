#pragma once
#include "CoreMinimal.h"
#include "EGoalType.h"
#include "GameplayEventData.h"
#include "AgentBehaviourEventData.generated.h"

UCLASS(Blueprintable)
class UAgentBehaviourEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    UAgentBehaviourEventData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGoalType GetGoalType() const;
    
};

