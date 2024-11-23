#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SignalProcessingSubsystem.generated.h"

UCLASS(Blueprintable)
class USignalProcessingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USignalProcessingSubsystem();

};

