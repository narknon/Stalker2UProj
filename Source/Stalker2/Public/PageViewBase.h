#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "PageViewBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPageViewBase : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBindWidgetInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoudIgnoreInputOnPouse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOpenedFromDialog;
    
public:
    UPageViewBase();

};

