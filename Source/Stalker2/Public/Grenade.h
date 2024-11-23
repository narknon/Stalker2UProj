#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "HitReceiver.h"
#include "UIDActor_Grenade.h"
#include "Grenade.generated.h"

class AActor;
class UAkComponent;
class UGrenadeExplosionComponent;
class UHittableComponent;
class UMaterialInterface;
class UPhysicsInteractionComponent;
class UPhysicsSoundsComponent;
class UStaticMeshComponent;
class UWaterContactController;

UCLASS(Blueprintable)
class STALKER2_API AGrenade : public AUIDActor_Grenade, public IHitReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrenadeExplosionComponent* ExplosionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* ExplosionAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHittableComponent* HittableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsInteractionComponent* PhysicsInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterContactController* WaterContactController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float TimeToExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ExplosionDecalMaterial;
    
public:
    AGrenade(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void Explode() const;
    

    // Fix for true pure virtual functions not being implemented
};

