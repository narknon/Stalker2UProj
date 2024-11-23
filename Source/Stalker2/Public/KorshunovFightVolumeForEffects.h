#pragma once
#include "CoreMinimal.h"
#include "VolumeForEffects.h"
#include "KorshunovFightVolumeForEffects.generated.h"

class UAkAudioEvent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class STALKER2_API AKorshunovFightVolumeForEffects : public AVolumeForEffects {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> VolumeSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* VolumeVFX;
    
public:
    AKorshunovFightVolumeForEffects(const FObjectInitializer& ObjectInitializer);

};

