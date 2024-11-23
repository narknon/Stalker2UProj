#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WwiseDecayAuxBusRow.generated.h"

class UAkAuxBus;

USTRUCT(BlueprintType)
struct FWwiseDecayAuxBusRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Decay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAuxBus> AuxBus;
    
    AKAUDIO_API FWwiseDecayAuxBusRow();
};

