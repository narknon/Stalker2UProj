#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "LocalizationWidget.generated.h"

class UCommonTextBlock;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API ULocalizationWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLocalization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizationSID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlockObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlockObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CommonTextBlockObj;
    
public:
    ULocalizationWidget();

};

