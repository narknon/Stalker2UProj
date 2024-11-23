#pragma once
#include "CoreMinimal.h"
#include "LocalizationWidget.h"
#include "SlotScaleSettings.h"
#include "TextSettings.h"
#include "TextWidget.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTextWidget : public ULocalizationWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultWrapText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWrappingFromStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStyleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextSettings TextSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CommonTextObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlotScaleSettings TextScaleSettings;
    
    UTextWidget();

    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText();
    
};

