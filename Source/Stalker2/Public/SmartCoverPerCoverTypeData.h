#pragma once
#include "CoreMinimal.h"
#include "SmartCoverActionSide.h"
#include "SmartCoverAnimationMainLoopData.h"
#include "SmartCoverEnterTypes.h"
#include "SmartCoverExitTypes.h"
#include "SmartCoverTransitionSides.h"
#include "SmartCoverPerCoverTypeData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSmartCoverPerCoverTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartCoverEnterTypes> EnterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartCoverExitTypes> ExitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartCoverActionSide> IdlesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartCoverTransitionSides> TransitionsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransitionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartCoverAnimationMainLoopData> ActionAnimationsData;
    
    STALKER2_API FSmartCoverPerCoverTypeData();
};

