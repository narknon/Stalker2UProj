#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonNotificationWidgetStyle.generated.h"

class UModioCommonBorderStyle;
class UModioCommonImageStyle;
class UModioCommonRichTextStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonNotificationWidgetStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonBorderStyle> BackgroundBorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonBorderStyle> StatusBackgroundBorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonImageStyle> StatusIndicatorImageStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonRichTextStyle> NotificationTitleTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonRichTextStyle> NotificationMessageTextStyle;
    
    UModioCommonNotificationWidgetStyle();

};

