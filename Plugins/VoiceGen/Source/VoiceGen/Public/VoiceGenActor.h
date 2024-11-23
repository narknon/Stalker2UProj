#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoiceGenParams.h"
#include "VoiceGenActor.generated.h"

UCLASS(Blueprintable)
class VOICEGEN_API UVoiceGenActor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceGenParams Params;
    
public:
    UVoiceGenActor();

};

