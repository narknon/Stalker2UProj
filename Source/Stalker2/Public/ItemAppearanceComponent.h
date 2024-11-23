#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "NiagaraDataInterfaceExport.h"
#include "UIDActorComponent.h"
#include "WeaponAttachMeshesData.h"
#include "ItemAppearanceComponent.generated.h"

class UAkAudioEvent;
class UAkCallbackInfo;
class UAkComponent;
class UAkRtpc;
class UAkSwitchValue;
class UParticleCallbackHandler;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UItemAppearanceComponent : public UUIDActorComponent, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMeshInHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMeshUnequipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SecondaryItemInHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ShootingAttachMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* SilencerRTPCParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* FireIntervalRTPCParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* MechModulatorRTPCParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LastBulletInClipEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShellSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* WeaponTypeSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WeaponJamEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* WeaponAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KnifeLightAttackImpactEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KnifeHeavyAttackImpactEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAttachMeshesData WeaponInHandsAttachesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAttachMeshesData ShadowAttachesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleCallbackHandler* CollisionHandler;
    
public:
    UItemAppearanceComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnShotSoundStart(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    

    // Fix for true pure virtual functions not being implemented
};

