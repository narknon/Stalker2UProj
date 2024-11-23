#pragma once
#include "CoreMinimal.h"
#include "HoverIndicator.h"
#include "OnTrackingStageDelegate.h"
#include "OnUpdateStageHoverDelegate.h"
#include "Templates/SubclassOf.h"
#include "PDAQuestTaskContainer.generated.h"

class UPDAQuestTaskSlot;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAQuestTaskContainer : public UHoverIndicator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* TaskScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPDAQuestTaskSlot> TaskListClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskListSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrackingStage OnTrackingStage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateStageHover OnUpdateStageHover;
    
    UPDAQuestTaskContainer();

protected:
    UFUNCTION(BlueprintCallable)
    void StageClick(UPDAQuestTaskSlot* InSlot);
    
    UFUNCTION(BlueprintCallable)
    void MouseHoverStage(const bool bHovered, const int32 IndexOnParent);
    
};

