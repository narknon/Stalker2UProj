#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/HitResult.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=GSCMovieSceneActor -FallbackName=GSCMovieSceneActor
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=GSCSkeletalAnimationSectionSelectable -FallbackName=GSCSkeletalAnimationSectionSelectable
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneSectionTemplateDecorator -FallbackName=MovieSceneSectionTemplateDecorator
#include "HitBlocker.h"
#include "HitReceiver.h"
#include "ModelCharacter.h"
#include "Obj.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UAttackComponent;
class UCurveVector;
class UDataTable;
class UHeadFlashlightComponent;
class UItemAppearanceComponent;
class ULaserSightComponent;
class UMovementComponentExt;
class UNiagaraComponent;
class UObjWaterContactController;
class UPhysicalAnimationComponent;
class US2TargetMeleeSectorComponent;
class UWetnessComponent;

UCLASS(Blueprintable, NotPlaceable)
class STALKER2_API AObj : public AModelCharacter, public IHitReceiver, public IVisualLoggerDebugSnapshotInterface, public IGSCMovieSceneActor, public IMovieSceneSectionTemplateDecorator, public IGSCSkeletalAnimationSectionSelectable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjTurnedToTarget, bool, bSuccess);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemAppearanceComponent* ItemAppearanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalAnimationComponent*> PhysicalAnimationComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWetnessComponent* WetnessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    US2TargetMeleeSectorComponent* MeleeSectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitBlocker> HitBlockers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementComponentExt* MovementComponentExt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjWaterContactController* WaterContactController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULaserSightComponent* LaserSightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* FallingDamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallingDamageSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* FallingDamageEasySoundSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* FallingDamageMediumSoundSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* FallingDamageHighSoundSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CutsceneCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* AkComponentRetargetTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttackComponent* AttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeadFlashlightComponent* FlashlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioHeadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioPelvisComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioLeftHandComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioRightHandComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ShootingParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* PostShootingParticle;
    
public:
    AObj(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartCutsceneSequence(const AActor* SynchronizationPoint, const FRotator OverrideRotation);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void EndCutsceneSequence();
    

    // Fix for true pure virtual functions not being implemented
};

