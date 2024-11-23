#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimDialogContextualArray.h"
#include "AnimDialogContextualWeightedArray.h"
#include "DragDeadBodyAnimations.h"
#include "EDialogAnimationType.h"
#include "EEmotionalDialogState.h"
#include "EquipUnequipAnimations.h"
#include "HumanDeathAnimations.h"
#include "PDAUsageAnimations.h"
#include "SmartCoverAnimCollectionData.h"
#include "HumanDefaultAnimCollection.generated.h"

class UHumanAnimCollection;

UCLASS(Blueprintable)
class STALKER2_API UHumanDefaultAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHumanAnimCollection* HumanAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* HumanAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipUnequipAnimations EquipUnequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPDAUsageAnimations PDAUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDragDeadBodyAnimations DragDeadBodyAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmartCoverAnimCollectionData SmartCoverAnimCollectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHumanDeathAnimations DeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEmotionalDialogState, FAnimDialogContextualWeightedArray> DialogIdleAnimations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDialogAnimationType, FAnimDialogContextualArray> DialogAnimations;
    
public:
    UHumanDefaultAnimCollection();

};

