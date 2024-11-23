#pragma once
#include "CoreMinimal.h"
#include "ERelationLevel.h"
#include "ReactionDesc.generated.h"

USTRUCT(BlueprintType)
struct FReactionDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERelationLevel RelationToProvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERelationLevel RelationToRequester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReactionValue;
    
    STALKER2_API FReactionDesc();
};

