#pragma once
#include "CoreMinimal.h"
#include "ModioCommonModListViewInterface.h"
#include "ModioCommonTileView.h"
#include "ModioCommonModTileView.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonModTileView : public UModioCommonTileView, public IModioCommonModListViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusOnceListIsPopulatedRequested;
    
public:
    UModioCommonModTileView();


    // Fix for true pure virtual functions not being implemented
};

