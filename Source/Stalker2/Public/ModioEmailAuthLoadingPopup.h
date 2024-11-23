#pragma once
#include "CoreMinimal.h"
#include "ModioCommonEmailAuthLoadingViewBase.h"
#include "ModioEmailAuthLoadingPopup.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioEmailAuthLoadingPopup : public UModioCommonEmailAuthLoadingViewBase {
    GENERATED_BODY()
public:
    UModioEmailAuthLoadingPopup();

};

