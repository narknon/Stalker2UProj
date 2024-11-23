#pragma once
#include "CoreMinimal.h"
#include "ModioCommonSearchResultsView.h"
#include "ModioSearchResultsView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioSearchResultsView : public UModioCommonSearchResultsView {
    GENERATED_BODY()
public:
    UModioSearchResultsView();

};

