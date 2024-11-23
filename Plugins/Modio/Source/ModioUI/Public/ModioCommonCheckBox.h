#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/CheckBox.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonCheckBox.generated.h"

class UModioCommonCheckBoxStyle;
class UModioCommonTextBlock;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonCheckBox : public UCheckBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonCheckBoxStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* LabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LabelText;
    
public:
    UModioCommonCheckBox();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonCheckBoxStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(const FText& InLabelText);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnCheckStateChanged(bool bIsChecked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLabelTextBlockText() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLabel() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FMargin GetCheckboxContentPadding() const;
    
};

