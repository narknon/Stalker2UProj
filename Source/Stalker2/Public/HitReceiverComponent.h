#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnomalyHitSignatureDelegate.h"
#include "BulletProjectileHitSignatureDelegate.h"
#include "ExplosionHitSignatureDelegate.h"
#include "HitReceiver.h"
#include "MeleeHitSignatureDelegate.h"
#include "PhysicsHitSignatureDelegate.h"
#include "ProjectileHitSignatureDelegate.h"
#include "WaterHitSignatureDelegate.h"
#include "HitReceiverComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UHitReceiverComponent : public UActorComponent, public IHitReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplosionHitSignature ExplosionHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBulletProjectileHitSignature BulletProjectileHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeHitSignature MeleeHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnomalyHitSignature AnomalyHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileHitSignature ProjectileHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsHitSignature PhysicsHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterHitSignature WaterHit;
    
    UHitReceiverComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

