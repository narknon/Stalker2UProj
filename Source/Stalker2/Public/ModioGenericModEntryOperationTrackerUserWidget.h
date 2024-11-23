#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModioCommonModOperationTrackerUserWidget.h"
#include "ModioGenericModEntryOperationTrackerUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioGenericModEntryOperationTrackerUserWidget : public UModioCommonModOperationTrackerUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultImageColorTint;
    
    UModioGenericModEntryOperationTrackerUserWidget();

};

