#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomGridSlot.h"
#include "TraderGridSlot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTraderGridSlot : public UCustomGridSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CantBuyHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultHighlightColor;
    
public:
    UTraderGridSlot();

};

