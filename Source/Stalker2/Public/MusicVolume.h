#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "EMusicState.h"
#include "MusicVolume.generated.h"

class UAkSwitchValue;

UCLASS(Blueprintable)
class STALKER2_API AMusicVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMusicState MusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RegionSIDGlobalVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkSwitchValue> AmbientStateMusicSwitch;
    
public:
    AMusicVolume(const FObjectInitializer& ObjectInitializer);

};

