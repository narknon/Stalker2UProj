#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "SleepView.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USleepView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeAnimation;
    
    USleepView();

};

