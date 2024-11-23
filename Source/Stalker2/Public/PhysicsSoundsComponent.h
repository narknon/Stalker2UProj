#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BusVolumeDataReceiver.h"
#include "HitReceiver.h"
#include "PhysicsSoundsComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UAkSwitchValue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPhysicsSoundsComponent : public UActorComponent, public IHitReceiver, public IBusVolumeDataReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PhysicsInteractionPrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PhysicalObjectAudioEventPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PhysicalObjectAudioEventStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* DraggingParameterSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* RollingParameterSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* HitParameterSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* PhysicalObjectContinuousSpeedRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* PhysicalObjectInstantSpeedRTPCParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* WaterDepthRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioComponent;
    
public:
    UPhysicsSoundsComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

