#pragma once
#include "CoreMinimal.h"
#include "ChangeFireTypeAnimation.h"
#include "ChangeFireTypeAnimations.generated.h"

USTRUCT(BlueprintType)
struct FChangeFireTypeAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChangeFireTypeAnimation> AnimationsArray;
    
    STALKER2_API FChangeFireTypeAnimations();
};

