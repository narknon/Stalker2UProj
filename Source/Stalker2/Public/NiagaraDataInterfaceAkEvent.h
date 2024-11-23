#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceAkEvent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UNiagaraDataInterfaceAkEvent : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopEvent;
    
    UNiagaraDataInterfaceAkEvent();

};

