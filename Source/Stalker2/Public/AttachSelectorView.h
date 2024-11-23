#pragma once
#include "CoreMinimal.h"
#include "ESlotDirection.h"
#include "ViewBaseExtended.h"
#include "AttachSelectorView.generated.h"

class UAttachSelectorSlot;
class UAttachSelectorTip;
class UUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UAttachSelectorView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* SlotGridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttachSelectorTip* AttachSelectorTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAttachSelectorSlot*> LeftSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAttachSelectorSlot*> RightSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAttachSelectorSlot*> UpSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAttachSelectorSlot*> DownSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAttachSelectorSlot*> AllSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastChangeSlotTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttachSelectorSlot* DetachSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlotDirection CurrentChooseLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 IndexCurrentSelectedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAttachSelectorSlot* SelectedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAttachSelectorSlot* LastHoveredAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlotDirection LastTriggeredDirection;
    
public:
    UAttachSelectorView();

    UFUNCTION(BlueprintCallable)
    void UIIterateUpSlots();
    
    UFUNCTION(BlueprintCallable)
    void UIIterateRightSlots();
    
    UFUNCTION(BlueprintCallable)
    void UIIterateLeftSlots();
    
    UFUNCTION(BlueprintCallable)
    void UIIterateDownSlots();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentChooseLine(const ESlotDirection InCurrentChooseLine);
    
    UFUNCTION(BlueprintCallable)
    void DetachAllAttachByDirection();
    
    UFUNCTION(BlueprintCallable)
    void AttachSelectorSlotUp();
    
    UFUNCTION(BlueprintCallable)
    void AttachSelectorSlotSelect();
    
    UFUNCTION(BlueprintCallable)
    void AttachSelectorSlotRight();
    
    UFUNCTION(BlueprintCallable)
    void AttachSelectorSlotLeft();
    
    UFUNCTION(BlueprintCallable)
    void AttachSelectorSlotDown();
    
    UFUNCTION(BlueprintCallable)
    void AttachSelectorDetachAll();
    
};

