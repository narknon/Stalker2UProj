#pragma once
#include "CoreMinimal.h"
#include "GameplayEventData.h"
#include "PossessedObjectEventData.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPossessedObjectEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    UPossessedObjectEventData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPossessedObject() const;
    
};

