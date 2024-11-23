#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "Engine/HitResult.h"
#include "UIDActor_Anomaly.h"
#include "Anomaly.generated.h"

class AActor;
class UAkAudioEvent;
class UAkCallbackInfo;
class UAkComponent;
class UAkSwitchValue;
class UBoxComponent;
class UGSCNavModifierComponent;
class UNiagaraComponent;
class UPrimitiveComponent;
class UWaterContactController;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class STALKER2_API AAnomaly : public AUIDActor_Anomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AnomalyAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DieSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* IdleSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* FadeSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* ActiveSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* TriggerSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* FirstPersonSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* ThirdPersonSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSCNavModifierComponent* SpaceRestrictorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SpaceRestrictorShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterContactController* WaterContactController;
    
public:
    AAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRechargeStateStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNiagaraFinished(UNiagaraComponent* FinishedNiagara);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIdleStateStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDieSoundFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveStateStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivationStateStarted();
    
    UFUNCTION(BlueprintCallable)
    void ForceDeactivate();
    
    UFUNCTION(BlueprintCallable)
    void ForceActivateOnce();
    
    UFUNCTION(BlueprintCallable)
    void ForceActivateEndless();
    
};

