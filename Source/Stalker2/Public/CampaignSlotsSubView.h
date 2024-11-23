#pragma once
#include "CoreMinimal.h"
#include "MenuSubViewBase.h"
#include "ShortcutData.h"
#include "Templates/SubclassOf.h"
#include "CampaignSlotsSubView.generated.h"

class UCampaignSlotButton;
class UMenuButtonActionBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UCampaignSlotsSubView : public UMenuSubViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCampaignSlotButton> CampaignSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCampaignSlotButton> EmptyCampaignSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonActionBase* EmptyCampaignSlotButtonAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonActionBase* CampaignSlotButtonAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShortcutData> CampaignSlotButtonShortcuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShortcutData> EmptyCampaignSlotButtonShortcuts;
    
public:
    UCampaignSlotsSubView();

};

