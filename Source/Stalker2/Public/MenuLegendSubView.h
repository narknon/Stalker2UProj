#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "MenuLegendSubView.generated.h"

class UHintControllerBase;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UMenuLegendSubView : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* LegendSubViewPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* LegendButtonPanelOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* LegendButtonPanelTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetweenHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHintControllerBase*> LegendSubViewWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHintControllerBase*> LegendButtonWidgets;
    
public:
    UMenuLegendSubView();

};

