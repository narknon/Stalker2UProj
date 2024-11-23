#pragma once
#include "CoreMinimal.h"
#include "EDamageSource.h"
#include "HitReceiver.h"
#include "OnDamageAccumulatedDelegate.h"
#include "SaveableComponent.h"
#include "UIDActorComponent.h"
#include "DamageInteractableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDamageInteractableComponent : public UUIDActorComponent, public IHitReceiver, public ISaveableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageAccumulated OnDamageAccumulated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EDamageSource> DamageSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyPlayerDamage;
    
public:
    UDamageInteractableComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

