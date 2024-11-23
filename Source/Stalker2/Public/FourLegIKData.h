#pragma once
#include "CoreMinimal.h"
#include "BaseLegIKData.h"
#include "LegIKData.h"
#include "FourLegIKData.generated.h"

USTRUCT(BlueprintType)
struct FFourLegIKData : public FBaseLegIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegIKData FrontLeftFootIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegIKData FrontRightFootIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegIKData BackLeftFootIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegIKData BackRightFootIKData;
    
    STALKER2_API FFourLegIKData();
};

