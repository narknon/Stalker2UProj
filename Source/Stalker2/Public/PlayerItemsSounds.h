#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayerItemsSounds.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class UPlayerItemsSounds : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SFXPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SFXPickUpCloth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SFXDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SFXUse;
    
    UPlayerItemsSounds();

};

