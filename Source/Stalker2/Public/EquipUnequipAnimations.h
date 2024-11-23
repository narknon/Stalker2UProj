#pragma once
#include "CoreMinimal.h"
#include "EquipUnequipAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FEquipUnequipAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Unequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FastUnequip;
    
    STALKER2_API FEquipUnequipAnimations();
};

