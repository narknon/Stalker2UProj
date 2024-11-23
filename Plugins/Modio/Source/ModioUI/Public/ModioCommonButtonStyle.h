#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonButtonStyle.generated.h"

class UModioCommonImageStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonButtonStyle : public UCommonButtonStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonImageStyle> NormalIconStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonImageStyle> FocusedIconStyle;
    
    UModioCommonButtonStyle();

};

