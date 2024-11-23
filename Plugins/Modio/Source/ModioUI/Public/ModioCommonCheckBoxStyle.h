#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateTypes.h"
#include "Layout/Margin.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonCheckBoxStyle.generated.h"

class UModioCommonTextStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonCheckBoxStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTextStyle> LabelTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTextStyle> HoveredLabelTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ContentPadding;
    
    UModioCommonCheckBoxStyle();

};

