#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractEffectData.h"
#include "ApplyEffectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UApplyEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseStackableEffects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractEffectData> EffectsToApply;
    
public:
    UApplyEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveEffects();
    
    UFUNCTION(BlueprintCallable)
    void ApplyEffects();
    
};

