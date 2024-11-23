#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RazerChromaEventTracker.generated.h"

class URazerChromaSubsystem;

UCLASS(Blueprintable)
class URazerChromaEventTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URazerChromaSubsystem* Subsystem;
    
public:
    URazerChromaEventTracker();

};

