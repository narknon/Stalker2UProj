#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "ECrosshairType.h"
#include "ECrosshairTypeSetting.h"
#include "CrosshairWidgetSwitcher.generated.h"

class UCrosshairWidgetBase;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UCrosshairWidgetSwitcher : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* CrosshairSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowCrosshairAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideCrosshairAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BlockHideCrosshairAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDiffirentCrosshairType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrosshairType DefaultCrosshairType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECrosshairTypeSetting, bool> CrosshairType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairAnimationAimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrosshairWidgetBase* CurrCrosshairWidget;
    
public:
    UCrosshairWidgetSwitcher();

};

