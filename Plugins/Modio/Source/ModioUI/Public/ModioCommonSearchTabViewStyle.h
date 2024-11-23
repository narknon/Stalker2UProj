#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonSearchTabViewStyle.generated.h"

class UModioCommonBorderStyle;
class UModioCommonButtonStyle;
class UModioCommonEditableTextBoxStyle;
class UModioCommonTextStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonSearchTabViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonBorderStyle> InternalBackgroundBorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonBorderStyle> OverlayBackgroundBorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTextStyle> SearchTabTitleTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonEditableTextBoxStyle> SearchTextBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonButtonStyle> CloseButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonButtonStyle> ResetButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonButtonStyle> SearchButtonStyle;
    
    UModioCommonSearchTabViewStyle();

};

