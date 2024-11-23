#pragma once
#include "CoreMinimal.h"
#include "PsySpawnStruct.generated.h"

class AAgent;

USTRUCT(BlueprintType)
struct FPsySpawnStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GameGraphMinComponentVerticesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAgent> CurrentPsyPrototypeClass;
    
    STALKER2_API FPsySpawnStruct();
};

