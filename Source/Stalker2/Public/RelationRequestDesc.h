#pragma once
#include "CoreMinimal.h"
#include "ReactionDesc.h"
#include "RelationRequestDesc.generated.h"

USTRUCT(BlueprintType)
struct FRelationRequestDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReactionDesc> Reactions;
    
    STALKER2_API FRelationRequestDesc();
};

