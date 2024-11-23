#pragma once
#include "CoreMinimal.h"
#include "CharacterItemWeightedAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FCharacterItemWeightedAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    STALKER2_API FCharacterItemWeightedAnimations();
};

