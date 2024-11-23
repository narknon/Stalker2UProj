#pragma once
#include "CoreMinimal.h"
#include "SingleClickComponent.h"
#include "CodelockSingleClickComponent.generated.h"

class AObj;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UCodelockSingleClickComponent : public USingleClickComponent {
    GENERATED_BODY()
public:
    UCodelockSingleClickComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Interact(AObj* InteractedActor);
    
};

