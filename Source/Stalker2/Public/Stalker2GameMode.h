#pragma once
#include "CoreMinimal.h"
#include "Stalker2BaseGameMode.h"
#include "Stalker2GameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AStalker2GameMode : public AStalker2BaseGameMode {
    GENERATED_BODY()
public:
    AStalker2GameMode(const FObjectInitializer& ObjectInitializer);

};

