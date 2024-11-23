#pragma once
#include "CoreMinimal.h"
#include "RelationLevelRange.generated.h"

USTRUCT(BlueprintType)
struct FRelationLevelRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 End;
    
    STALKER2_API FRelationLevelRange();
};

