#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonDialogViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonDialogViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UModioCommonDialogViewBase();

};

