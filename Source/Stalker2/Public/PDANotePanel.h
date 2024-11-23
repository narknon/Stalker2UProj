#pragma once
#include "CoreMinimal.h"
#include "ENoteType.h"
#include "PDASlotPanelBase.h"
#include "SlotFilterSettings.h"
#include "PDANotePanel.generated.h"

class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDANotePanel : public UPDASlotPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* AbsentNoteSizeBox;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENoteType, FSlotFilterSettings> SlotFilterSettings;
    
    UPDANotePanel();

};

