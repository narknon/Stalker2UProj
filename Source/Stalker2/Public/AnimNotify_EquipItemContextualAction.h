#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "AnimNotifyBase.h"
#include "PrototypeSID.h"
#include "AnimNotify_EquipItemContextualAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STALKER2_API UAnimNotify_EquipItemContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID ItemSID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneToEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceChangeItemInHand;
    
public:
    UAnimNotify_EquipItemContextualAction();

};

