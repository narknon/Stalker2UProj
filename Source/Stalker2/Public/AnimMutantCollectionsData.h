#pragma once
#include "CoreMinimal.h"
#include "AnimMutantCollectionsData.generated.h"

class UMutantAnimCollection;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimMutantCollectionsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMutantAnimCollection* AnimCollection;
    
    FAnimMutantCollectionsData();
};

