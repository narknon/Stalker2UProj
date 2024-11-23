#pragma once
#include "CoreMinimal.h"
#include "GSCComponentReference.h"
#include "SignalToReceive.generated.h"

USTRUCT(BlueprintType)
struct FSignalToReceive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSCComponentReference SenderComponentRef;
    
    STALKER2_API FSignalToReceive();
};

