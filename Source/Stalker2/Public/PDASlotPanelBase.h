#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "OnUpdateDetailsDelegate.h"
#include "OnUpdateSelectButtonDelegate.h"
#include "PDASlotPanelBase.generated.h"

class UPDAArrowButton;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDASlotPanelBase : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SlotContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAArrowButton* ArrowDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAArrowButton* ArrowTop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateDetails OnUpdateDetails;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateSelectButton OnUpdateSelectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArrowActionIdTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArrowActionIdDown;
    
    UPDASlotPanelBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSelectSlotID();
    
    UFUNCTION(BlueprintCallable)
    void ClickSlot(const int32 QuestSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClickArrowButton(const FName ButtonId);
    
};

