#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RazerChromaCinematicEventTracker.generated.h"

class URazerChromaSubsystem;

UCLASS(Blueprintable)
class STALKER2_API URazerChromaCinematicEventTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URazerChromaSubsystem* Subsystem;
    
public:
    URazerChromaCinematicEventTracker();

};

