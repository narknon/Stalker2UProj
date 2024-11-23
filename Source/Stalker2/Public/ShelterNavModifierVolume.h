#pragma once
#include "CoreMinimal.h"
#include "SystemicNavModifierVolume.h"
#include "ShelterNavModifierVolume.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AShelterNavModifierVolume : public ASystemicNavModifierVolume {
    GENERATED_BODY()
public:
    AShelterNavModifierVolume(const FObjectInitializer& ObjectInitializer);

};

