#pragma once
#include "CoreMinimal.h"
#include "OnChangeSlotSelectQuestDelegate.h"
#include "OnQuestSlotClickDelegate.h"
#include "PDASlotBase.h"
#include "PDAQuestSlot.generated.h"

class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAQuestSlot : public UPDASlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* RegionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* PlayText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestSlotClick OnQuestSlotClick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSlotSelectQuest OnChangeSlotSelectQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectStageHoverOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HintLocalizationSIDEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HintLocalizationSIDDisabled;
    
    UPDAQuestSlot();

};

