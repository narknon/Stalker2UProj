#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "DataLayerPhysicsComponent.generated.h"

class UDataLayerInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDataLayerPhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDataLayerPhysicsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDataLayersUpdated(const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);
    
};

