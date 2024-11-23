#pragma once
#include "CoreMinimal.h"
#include "ModioCommonListView.h"
#include "ModioCommonModListViewInterface.h"
#include "ModioCommonModListView.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonModListView : public UModioCommonListView, public IModioCommonModListViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusOnceListIsPopulatedRequested;
    
public:
    UModioCommonModListView();


    // Fix for true pure virtual functions not being implemented
};

