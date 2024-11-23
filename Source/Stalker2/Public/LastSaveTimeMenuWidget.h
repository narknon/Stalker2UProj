#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "LastSaveTimeMenuWidget.generated.h"

class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API ULastSaveTimeMenuWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DateFormat;
    
public:
    ULastSaveTimeMenuWidget();

};

