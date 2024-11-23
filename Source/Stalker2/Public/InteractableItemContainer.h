#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "ActorInteractionDataInterface.h"
#include "HitReceiver.h"
#include "Physible.h"
#include "UIDActor_ItemContainer.h"
#include "WeaponAttachMeshesData.h"
#include "InteractableItemContainer.generated.h"

class AActor;
class UDataLayerPhysicsComponent;
class UHittableComponent;
class UItemContainerInteractionComponent;
class ULaserSightComponent;
class UPhysicsInteractionComponent;
class UPhysicsSoundsComponent;

UCLASS(Blueprintable, NotPlaceable)
class STALKER2_API AInteractableItemContainer : public AUIDActor_ItemContainer, public IActorInteractionDataInterface, public IHitReceiver, public IPhysible {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsInteractionComponent* PhysicsInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHittableComponent* HittableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULaserSightComponent* LaserSightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDataLayerPhysicsComponent* DataLayerPhysicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemContainerInteractionComponent* InteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAttachMeshesData WeaponAttachesData;
    
public:
    AInteractableItemContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    

    // Fix for true pure virtual functions not being implemented
};

