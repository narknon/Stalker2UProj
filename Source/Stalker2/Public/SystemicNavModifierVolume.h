#pragma once
#include "CoreMinimal.h"
#include "GSCNavModifierVolume.h"
#include "SystemicNavModifierVolume.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class STALKER2_API ASystemicNavModifierVolume : public AGSCNavModifierVolume {
    GENERATED_BODY()
public:
    ASystemicNavModifierVolume(const FObjectInitializer& ObjectInitializer);

};

