#pragma once
#include "CoreMinimal.h"
#include "ESpaceRestrictionType.h"
#include "FactionSelector.h"
#include "FactionRestrictions.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FFactionRestrictions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSelector Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpaceRestrictionType RestrictionType;
    
    FFactionRestrictions();
};

