#pragma once
#include "CoreMinimal.h"
#include "EPerformanceBoostUpscalingMethod.h"
#include "SettingElementSwitcher.h"
#include "UpscalingSettingElementInterface.h"
#include "UpscalingElementSwitcher.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UUpscalingElementSwitcher : public USettingElementSwitcher, public IUpscalingSettingElementInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPerformanceBoostUpscalingMethod UpscalingMethodValue;
    
    UUpscalingElementSwitcher();


    // Fix for true pure virtual functions not being implemented
};

