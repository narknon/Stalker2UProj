#pragma once
#include "CoreMinimal.h"
#include "CrosshairWidgetBase.h"
#include "CrosshairWidgetPoint.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UCrosshairWidgetPoint : public UCrosshairWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Point;
    
public:
    UCrosshairWidgetPoint();

};

