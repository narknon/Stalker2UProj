#pragma once
#include "CoreMinimal.h"
#include "PlayerDeathAnimArray.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FPlayerDeathAnimArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Animations;
    
    STALKER2_API FPlayerDeathAnimArray();
};

