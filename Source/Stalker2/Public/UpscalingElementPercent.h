#pragma once
#include "CoreMinimal.h"
#include "EPerformanceBoostUpscalingMethod.h"
#include "SettingsElementPercent.h"
#include "UpscalingSettingElementInterface.h"
#include "UpscalingElementPercent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UUpscalingElementPercent : public USettingsElementPercent, public IUpscalingSettingElementInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPerformanceBoostUpscalingMethod UpscalingMethodValue;
    
    UUpscalingElementPercent();


    // Fix for true pure virtual functions not being implemented
};

