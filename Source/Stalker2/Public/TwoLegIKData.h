#pragma once
#include "CoreMinimal.h"
#include "BaseLegIKData.h"
#include "LegIKData.h"
#include "TwoLegIKData.generated.h"

USTRUCT(BlueprintType)
struct FTwoLegIKData : public FBaseLegIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegIKData LeftFootIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegIKData RightFootIKData;
    
    STALKER2_API FTwoLegIKData();
};

