#pragma once
#include "CoreMinimal.h"
#include "ECloseType.h"
#include "EWidgetNameEx.h"
#include "ViewOpenSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FViewOpenSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEffectCursorOnShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoudShowMouseCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoudIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoudIgnoreInputOnPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoudClearInputOnClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoudSendOpenUpdateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoudCheckOpenView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoudIgnoreCheckOpenView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoudIgnoreLowPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewerCloseOtherViews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECloseType CloseType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWidgetNameEx> WidgetsToHideThisWhenOpen;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWidgetNameEx> CloseWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PriorityZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeRestoredAfterPause;
    
public:
    FViewOpenSettings();
};

