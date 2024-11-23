#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WanderingLightInstance.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AWanderingLightInstance : public AActor {
    GENERATED_BODY()
public:
    AWanderingLightInstance(const FObjectInitializer& ObjectInitializer);

};

