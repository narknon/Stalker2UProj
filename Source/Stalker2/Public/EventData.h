#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeTransform;
    
    STALKER2_API FEventData();
};

