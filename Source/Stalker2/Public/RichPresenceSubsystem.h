#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "RichPresenceSubsystem.generated.h"

UCLASS(Blueprintable)
class URichPresenceSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    URichPresenceSubsystem();

};

