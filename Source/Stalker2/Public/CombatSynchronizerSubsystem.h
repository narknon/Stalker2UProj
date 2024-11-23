#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CombatSynchronizerSubsystem.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCombatSynchronizerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UCombatSynchronizerSubsystem();

};

