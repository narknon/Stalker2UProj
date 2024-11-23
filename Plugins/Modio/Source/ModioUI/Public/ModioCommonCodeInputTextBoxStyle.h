#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioCommonCodeInputTextBoxInputStyle.h"
#include "ModioCommonCodeInputTextBoxStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonCodeInputTextBoxStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonCodeInputTextBoxInputStyle Style;
    
    UModioCommonCodeInputTextBoxStyle();

};

