#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonReportViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonReportViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UModioCommonReportViewBase();

};

