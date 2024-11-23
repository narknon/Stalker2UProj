#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonDialogMessageViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonDialogMessageViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UModioCommonDialogMessageViewBase();

};

