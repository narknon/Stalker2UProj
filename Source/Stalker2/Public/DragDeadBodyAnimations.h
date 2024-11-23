#pragma once
#include "CoreMinimal.h"
#include "DragDeadBodyAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDragDeadBodyAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PickUpBodyFaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DropBody;
    
    STALKER2_API FDragDeadBodyAnimations();
};

