#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "EGSCInputDeviceType.h"
#include "HintDecoratorBase.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UHintDecoratorBase : public URichTextBlockImageDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSCInputDeviceType DefaultPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEditorDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRecolorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRecolorConnectedBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseStylePrefix;
    
    UHintDecoratorBase();

};

