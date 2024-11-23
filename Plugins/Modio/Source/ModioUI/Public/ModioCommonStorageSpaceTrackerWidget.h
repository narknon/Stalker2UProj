#pragma once
#include "CoreMinimal.h"
#include "TickableModioCommonWidget.h"
#include "ModioCommonStorageSpaceTrackerWidget.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonStorageSpaceTrackerWidget : public UTickableModioCommonWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStorageSpaceTrackerUpdated OnStorageSpaceTrackerUpdated;
    
    UModioCommonStorageSpaceTrackerWidget();

};

