#pragma once
#include "CoreMinimal.h"
#include "EAgentDomain.h"
#include "ESpaceRestrictionType.h"
#include "AgentDomainRestrictions.generated.h"

USTRUCT(BlueprintType)
struct FAgentDomainRestrictions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAgentDomain AgentDomain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpaceRestrictionType RestrictionType;
    
    STALKER2_API FAgentDomainRestrictions();
};

