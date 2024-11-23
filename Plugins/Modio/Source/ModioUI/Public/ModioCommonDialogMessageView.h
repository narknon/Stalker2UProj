#pragma once
#include "CoreMinimal.h"
#include "EModioCommonDialogButtonType.h"
#include "ModioCommonDialogMessageViewBase.h"
#include "ModioCommonDialogMessageView.generated.h"

class UModioCommonButtonBase;
class UModioCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonDialogMessageView : public UModioCommonDialogMessageViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* ConfirmButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* OkButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* ModDetailsButton;
    
public:
    UModioCommonDialogMessageView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonEnabledState(UModioCommonButtonBase* Button, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TMap<EModioCommonDialogButtonType, UModioCommonButtonBase*> GetButtons() const;
    
};

