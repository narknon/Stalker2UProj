#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Stalker2HUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class AStalker2HUD : public AHUD {
    GENERATED_BODY()
public:
    AStalker2HUD(const FObjectInitializer& ObjectInitializer);

};

