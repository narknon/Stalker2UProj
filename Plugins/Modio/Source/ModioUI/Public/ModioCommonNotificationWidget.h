#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModioCommonNotificationWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonNotificationWidget.generated.h"

class UModioCommonBorder;
class UModioCommonImage;
class UModioCommonNotificationWidgetStyle;
class UModioCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonNotificationWidget : public UModioCommonNotificationWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonNotificationWidgetStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonBorder* BackgroundBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonBorder* StatusBackgroundBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonImage* StatusIndicatorImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* NotificationTitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* NotificationMessageTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisplayStarted;
    
public:
    UModioCommonNotificationWidget();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonNotificationWidgetStyle> InStyle);
    
};

