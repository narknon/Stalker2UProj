#pragma once
#include "CoreMinimal.h"
#include "EAnimGuitarState.h"
#include "PlayerGuitarAnimations.generated.h"

class UAkAudioEvent;
class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FPlayerGuitarAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ChordTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* GuitarItemEnterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* GuitarItemExitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimGuitarState, UAkAudioEvent*> StrumUpSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimGuitarState, UAkAudioEvent*> StrumDownSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimGuitarState, UAkAudioEvent*> GlissSounds;
    
    STALKER2_API FPlayerGuitarAnimations();
};

