#pragma once
#include "CoreMinimal.h"
#include "EPerformanceBoostUpscalingMethod.h"
#include "SettingElementOnOff.h"
#include "UpscalingSettingElementInterface.h"
#include "UpscalingElementOnOff.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UUpscalingElementOnOff : public USettingElementOnOff, public IUpscalingSettingElementInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPerformanceBoostUpscalingMethod UpscalingMethodValue;
    
    UUpscalingElementOnOff();


    // Fix for true pure virtual functions not being implemented
};

