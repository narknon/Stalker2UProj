#pragma once
#include "CoreMinimal.h"
#include "EPDATutorialCategory.h"
#include "PDASlotPanelBase.h"
#include "SlotFilterSettings.h"
#include "PDATutorialPanel.generated.h"

class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDATutorialPanel : public UPDASlotPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* AbsentTutorialSizeBox;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPDATutorialCategory, FSlotFilterSettings> SlotFilterSettings;
    
    UPDATutorialPanel();

};

