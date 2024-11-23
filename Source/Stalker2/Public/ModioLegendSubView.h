#pragma once
#include "CoreMinimal.h"
#include "MenuLegendSubView.h"
#include "ModioLegendData.h"
#include "ModioLegendSubView.generated.h"

class UModioSearchField;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioLegendSubView : public UMenuLegendSubView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioSearchField* SearchField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioLegendData LegendData;
    
public:
    UModioLegendSubView();

};

