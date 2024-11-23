#pragma once
#include "CoreMinimal.h"
#include "ModioCommonDialogViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonDialogView.generated.h"

class UModioCommonDialogMessageViewBase;
class UModioCommonWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonDialogView : public UModioCommonDialogViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonWidgetSwitcher* DialogSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonDialogMessageViewBase> DialogMessageViewClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCommonDialogMessageViewBase* DialogMessageView;
    
public:
    UModioCommonDialogView();

};

