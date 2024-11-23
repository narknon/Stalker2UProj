#pragma once
#include "CoreMinimal.h"
#include "Input/CommonBoundActionButton.h"
#include "ModioCommonBoundActionButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonBoundActionButton : public UCommonBoundActionButton {
    GENERATED_BODY()
public:
    UModioCommonBoundActionButton();

};

