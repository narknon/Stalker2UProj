#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "Engine/HitResult.h"
#include "HitReceiver.h"
#include "ObjectPhaseSettings.h"
#include "Physible.h"
#include "UIDActor_DestructibleObject.h"
#include "DestructibleObject.generated.h"

class AActor;
class UDataLayerInstance;
class UDataLayerPhysicsComponent;
class UExplosionComponent;
class UHittableComponent;
class UPhysicsInteractionComponent;
class UPhysicsSoundsComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NotPlaceable)
class STALKER2_API ADestructibleObject : public AUIDActor_DestructibleObject, public IHitReceiver, public IPhysible {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsInteractionComponent* PhysicsInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExplosionComponent* ExplosionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHittableComponent* HittableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDataLayerPhysicsComponent* DataLayerPhysicsComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EDataLayerRuntimeState> NeededLayers;
    
    ADestructibleObject(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TryAdjustPosition();
    
    UFUNCTION(BlueprintCallable)
    void StartDestructActions();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDataLayersUpdated(const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GSCFramework_OnPreTransition(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GSCFramework_OnPostTransition();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FObjectPhaseSettings> GSCFramework_GetObjectPhases() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectPhaseSettings GSCFramework_GetCurrentPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPhaseIndex() const;
    

    // Fix for true pure virtual functions not being implemented
};

