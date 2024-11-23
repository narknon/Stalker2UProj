#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "PlayerModeManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UPlayerModeManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UPlayerModeManager();

};

