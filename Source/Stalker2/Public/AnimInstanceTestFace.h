#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceFace.h"
#include "AnimInstanceTestFace.generated.h"

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstanceTestFace : public UAnimInstanceFace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlendShapeAnimations;
    
    UAnimInstanceTestFace();

};

