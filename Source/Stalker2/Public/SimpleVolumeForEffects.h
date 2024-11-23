#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SimpleVolumeForEffects.generated.h"

class UApplyEffectComponent;

UCLASS(Blueprintable)
class STALKER2_API ASimpleVolumeForEffects : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UApplyEffectComponent* EffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveEffectOnEndOverlap;
    
public:
    ASimpleVolumeForEffects(const FObjectInitializer& ObjectInitializer);

};

