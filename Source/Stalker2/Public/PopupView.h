#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "PopupView.generated.h"

class UOverlay;
class UPopupBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UPopupView : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PopupOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopupViewZOrder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPopupBase* ActivePopupWidget;
    
public:
    UPopupView();

    UFUNCTION(BlueprintCallable)
    void Retry();
    
    UFUNCTION(BlueprintCallable)
    void Discard();
    
    UFUNCTION(BlueprintCallable)
    void Confirm();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

