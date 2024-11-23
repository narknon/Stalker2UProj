#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "TextProperties.generated.h"

USTRUCT(BlueprintType)
struct FTextProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> TextAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TextMargin;
    
    STALKER2_API FTextProperties();
};

