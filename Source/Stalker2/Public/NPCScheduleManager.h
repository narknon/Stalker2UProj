#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "NPCScheduleManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UNPCScheduleManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UNPCScheduleManager();

};

