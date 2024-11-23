#pragma once
#include "CoreMinimal.h"
#include "ActorInteractionDataInterface.h"
#include "DamageInteractVFXData.h"
#include "ECutsceneBlinkProfile.h"
#include "ECutsceneEyesIdleProfile.h"
#include "ESpawnSource.h"
#include "GameplayEventListener.h"
#include "Obj.h"
#include "Physible.h"
#include "Agent.generated.h"

class AActor;
class UAITickComponent;
class UDataLayerPhysicsComponent;
class UDeadBody;
class ULODSyncComponent;
class UMotionWarpingComponent;
class UNPCComponent;
class UNiagaraComponent;
class UPhysicsControlComponent;
class UPhysicsInteractionComponent;
class UPhysicsSoundsComponent;
class UTouchComponent;
class UWoundedHoldComponent;

UCLASS(Blueprintable)
class STALKER2_API AAgent : public AObj, public IActorInteractionDataInterface, public IGameplayEventListener, public IPhysible {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNPCComponent* NPCComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsInteractionComponent* PhysicsInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWoundedHoldComponent* WoundedHoldComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTouchComponent* TouchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMotionWarpingComponent* MotionWarpingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAITickComponent* AITickComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsControlComponent* PhysicsControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULODSyncComponent* LODSyncComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDataLayerPhysicsComponent* DataLayerPhysicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDeadBody* DeadBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageInteractVFXData DamageInteractVFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachDamageInteractVFXBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* CutsceneLookAtActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CutsceneEyesLookAtWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CutsceneHeadLookAtWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECutsceneBlinkProfile CutsceneBlinkProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECutsceneEyesIdleProfile CutsceneEyesIdleProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CutsceneProceduralEyesWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CutsceneProceduralEyesAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CutsceneProceduralEyesIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuaranteedRelevancyUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName RagdollProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FName> RagdollBonesToOverlap;
    
public:
    AAgent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetCutsceneProceduralEyesWeight(float Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCutsceneProceduralEyesIntensity(float Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCutsceneProceduralEyesAmplitude(float Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCutsceneLookAtActor(const AActor* Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCutsceneHeadLookAtWeight(float Weight) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCutsceneEyesLookAtWeight(float Weight) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCutsceneEyesIdleProfile(ECutsceneEyesIdleProfile NewCutsceneEyesIdleProfile) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCutsceneBlinkProfile(ECutsceneBlinkProfile NewCutsceneBlinkProfile) const;
    
    UFUNCTION(BlueprintCallable)
    void PsyNPCInteractionStarted(AObj* InteractActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpawnSource GetSpawnSource() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DestroyDamageInteractParticle(UNiagaraComponent* ParticleSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Blink() const;
    

    // Fix for true pure virtual functions not being implemented
};

