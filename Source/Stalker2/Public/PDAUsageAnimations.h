#pragma once
#include "CoreMinimal.h"
#include "PDAUsageAnimations.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FPDAUsageAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EquipPDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* InteractWithPDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* UnequipPDA;
    
    STALKER2_API FPDAUsageAnimations();
};

