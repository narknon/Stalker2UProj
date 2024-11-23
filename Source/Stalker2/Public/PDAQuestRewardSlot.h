#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PDAQuestRewardSlot.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAQuestRewardSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RewardIcon;
    
    UPDAQuestRewardSlot();

};

