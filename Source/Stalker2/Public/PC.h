#pragma once
#include "CoreMinimal.h"
#include "EPlayerMovementType.h"
#include "Obj.h"
#include "PC.generated.h"

class AActor;
class UAimAssistComponent;
class UAimProcessorComponent;
class UAkRtpc;
class UAnomalyDetectorComponent;
class UCurveFloat;
class UDamageVoiceoverComponent;
class UGAPlayerComponent;
class UGeigerCounterComponent;
class UInteractionComponent;
class UMouthComponent;
class UPlayerInteractionComponent;
class UPlayerItemsSounds;
class UPlayerOpticScopeComponent;
class UPsyNoiseSFXComponent;
class USearchpointDetectorComponent;
class USkeletalMeshComponent;
class UStealthKillComponent;

UCLASS(Blueprintable)
class STALKER2_API APC : public AObj {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPlayerItemsSounds> PlayerItemSounds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMouthComponent* Mouth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageVoiceoverComponent* DamageVoiceover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAimAssistComponent* AimAssistComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAimProcessorComponent* AimProcessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ShadowMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGeigerCounterComponent* GeigerCounterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPsyNoiseSFXComponent* PsyNoiseSFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnomalyDetectorComponent* AnomalyDetectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerOpticScopeComponent* PlayerOpticScopeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerInteractionComponent* PlayerInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStealthKillComponent* StealthKillComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* StealthKillTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USearchpointDetectorComponent* SearchpointDetectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGAPlayerComponent* GAComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InteractionFromBluerint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinObjectInteractImpulse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxObjectInteractImpulse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ObjectInteractDelay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinSpeedToObjectResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalReapeatFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityMultimplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ObjectPenetrationToImpulseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ObjectMassToImpulseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ObjectMassToMaxImpulseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ReduceDamageFromNPCCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EPlayerMovementType AllowedMovementActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* PoppyFieldSleepinessParameter;
    
public:
    APC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLegsIKEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionTarget(const UInteractionComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    void PlayInteractionOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayInteractionInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInteractionComponent* GetInteractionTarget() const;
    
};

