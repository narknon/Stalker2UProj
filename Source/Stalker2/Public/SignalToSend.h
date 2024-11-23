#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSCComponentReference.h"
#include "SignalToSend.generated.h"

USTRUCT(BlueprintType)
struct FSignalToSend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSCComponentReference ReceiverComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ReceiverGuid;
    
    STALKER2_API FSignalToSend();
};

