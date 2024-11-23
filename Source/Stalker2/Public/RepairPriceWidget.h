#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "RepairPriceWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API URepairPriceWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Price;
    
public:
    URepairPriceWidget();

};

