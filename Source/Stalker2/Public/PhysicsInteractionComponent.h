#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitReceiver.h"
#include "PhysicsInteractionComponent.generated.h"

class UFXSystemAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPhysicsInteractionComponent : public UActorComponent, public IHitReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadDefaultPrototypeOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateWaterContactController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateWetnessComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* WaterContactNiagaraSystemVFX;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PhysicsInteractionPrototypeSID;
    
public:
    UPhysicsInteractionComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

