#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonErrorWithRetryWidgetStyle.generated.h"

class UModioCommonButtonStyle;
class UModioCommonImageStyle;
class UModioCommonTextStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonErrorWithRetryWidgetStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonImageStyle> IconImageStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTextStyle> ErrorTitleTextBlockStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTextStyle> ErrorDescriptionTextBlockStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonButtonStyle> RetryButtonStyle;
    
    UModioCommonErrorWithRetryWidgetStyle();

};

