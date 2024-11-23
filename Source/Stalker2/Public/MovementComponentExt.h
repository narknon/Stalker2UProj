#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PrototypeSID.h"
#include "MovementComponentExt.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UMovementComponentExt : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID CameraShakeEffectPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCameraShakeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CameraShakeEffectCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* WaterDepthRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* AkSurfaceSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* AkMovementBehaviourSwitch;
    
public:
    UMovementComponentExt(const FObjectInitializer& ObjectInitializer);

};

