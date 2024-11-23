#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "AttachSelectorTip.generated.h"

class UPanelWidget;
class UTextWidget;
class UUniformGridSlot;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UAttachSelectorTip : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TipPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUniformGridSlot* ParentGridSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* ParentPanelWidget;
    
public:
    UAttachSelectorTip();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
};

