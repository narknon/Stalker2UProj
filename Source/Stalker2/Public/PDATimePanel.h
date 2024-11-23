#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "PDATimePanel.generated.h"

class UTextWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDATimePanel : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* HourText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* MinutesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PointAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointAnimSpeed;
    
    UPDATimePanel();

};

