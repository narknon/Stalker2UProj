#pragma once
#include "CoreMinimal.h"
#include "FlashlightComponent.h"
#include "HitReceiver.h"
#include "HeadFlashlightComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UHeadFlashlightComponent : public UFlashlightComponent, public IHitReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlashlightTurnOnAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlashlightTurnOffAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlashlightBurnOutAudioEvent;
    
public:
    UHeadFlashlightComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

