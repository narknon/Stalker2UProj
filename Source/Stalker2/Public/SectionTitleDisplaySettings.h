#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "SectionTitleDisplaySettings.generated.h"

USTRUCT(BlueprintType)
struct FSectionTitleDisplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    STALKER2_API FSectionTitleDisplaySettings();
};

