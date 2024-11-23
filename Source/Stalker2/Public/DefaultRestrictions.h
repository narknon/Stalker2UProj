#pragma once
#include "CoreMinimal.h"
#include "AgentDomainRestrictions.h"
#include "ESpaceRestrictionType.h"
#include "FactionRestrictions.h"
#include "DefaultRestrictions.generated.h"

USTRUCT(BlueprintType)
struct FDefaultRestrictions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDuringEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpaceRestrictionType GlobalRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAgentDomainRestrictions> AgentDomainRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactionRestrictions> FactionRestrictions;
    
    STALKER2_API FDefaultRestrictions();
};

