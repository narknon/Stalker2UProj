#pragma once
#include "CoreMinimal.h"
#include "LockableComponent.h"
#include "ItemContainerInteractionComponent.generated.h"

class AObj;
class UAkAudioEvent;
class UAkSwitchValue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UItemContainerInteractionComponent : public ULockableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PresetItemContainerPrototypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* StashTypeSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AObj* InteractedActor;
    
public:
    UItemContainerInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

