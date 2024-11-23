#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnChangeCheckDelegate.h"
#include "OnCheckBoxClickDelegate.h"
#include "WidgetBase.h"
#include "CheckBoxWidget.generated.h"

class UImageWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UCheckBoxWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* ImageObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStartChecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMouseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHoverRecolor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HoverTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStyleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckedStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnCheckedStyleId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeCheck OnChangeCheck;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckBoxClick OnCheckBoxClick;
    
    UCheckBoxWidget();

    UFUNCTION(BlueprintCallable)
    void SetChecked(const bool bInChecked, const bool bBrodcastOnChangeCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChecked() const;
    
};

