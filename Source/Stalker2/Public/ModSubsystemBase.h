#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ModSubsystemBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UModSubsystemBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UModSubsystemBase();

};

