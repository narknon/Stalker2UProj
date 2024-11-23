#pragma once
#include "CoreMinimal.h"
#include "ModioCommonAuthView.h"
#include "ModioAuthView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioAuthView : public UModioCommonAuthView {
    GENERATED_BODY()
public:
    UModioAuthView();

};

