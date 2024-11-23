#pragma once
#include "CoreMinimal.h"
#include "EWidgetNameEx.h"
#include "ViewOpenSettings.h"
#include "WidgetBase.h"
#include "ViewBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UViewBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewOpenSettings ViewOpenSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetNameEx WidgetName;
    
    UViewBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UIClose();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreCloseUpdateView();
    
};

