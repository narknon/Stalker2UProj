#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Framework/Views/ITypedTableView.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "ModioCommonListViewStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonListViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTableViewStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle ScrollBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UModioCommonListViewStyle();

};

