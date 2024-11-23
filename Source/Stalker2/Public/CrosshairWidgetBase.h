#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "CrosshairWidgetBase.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UCrosshairWidgetBase : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayInterpol;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowCrosshairAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideCrosshairAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCrosshairAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairAnimationSpeed;
    
public:
    UCrosshairWidgetBase();

};

