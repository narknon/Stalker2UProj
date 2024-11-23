#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceArray.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAnimSequenceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimSequenceBase>> Animations;
    
    STALKER2_API FAnimSequenceArray();
};

