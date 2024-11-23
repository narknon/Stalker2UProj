#pragma once
#include "CoreMinimal.h"
#include "EMovementBehaviour.h"
#include "GameplayEventData.h"
#include "MovementModeChangedEventData.generated.h"

UCLASS(Blueprintable)
class UMovementModeChangedEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementBehaviour NewMovementBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementBehaviour OldMovementBehavior;
    
public:
    UMovementModeChangedEventData();

};

