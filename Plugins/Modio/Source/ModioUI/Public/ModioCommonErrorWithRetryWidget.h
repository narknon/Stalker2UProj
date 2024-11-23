#pragma once
#include "CoreMinimal.h"
#include "ModioUIAsyncRetryWidget.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonErrorWithRetryWidget.generated.h"

class UModioCommonButtonBase;
class UModioCommonErrorWithRetryWidgetStyle;
class UModioCommonImage;
class UModioCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonErrorWithRetryWidget : public UModioCommonActivatableWidget, public IModioUIAsyncRetryWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRetryClickedDynamicDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonErrorWithRetryWidgetStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ErrorTitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ErrorDescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* RetryButton;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRetryClickedDynamicDelegate RetryClickedDynamicDelegate;
    
    UModioCommonErrorWithRetryWidget();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonErrorWithRetryWidgetStyle> InStyle);
    

    // Fix for true pure virtual functions not being implemented
};

