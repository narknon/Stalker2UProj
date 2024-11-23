#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateTypes.h"
#include "ModioCommonProgressBarStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonProgressBarStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressBarStyle Style;
    
    UModioCommonProgressBarStyle();

};

