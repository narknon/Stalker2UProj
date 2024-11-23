#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "ELookAtOwnerState.h"
#include "ESmartCoverActionType.h"
#include "SmartCoverActionWithSide.h"
#include "SmartCoverAnimationMainLoopData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSmartCoverAnimationMainLoopData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartCoverActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtOwnerState LookAtOwnerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailableCoverActionsSide TargetActionSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartCoverActionWithSide> LookFromCoverMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartCoverActionWithSide> HideBehindCoverMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IdleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ThrowGrenadeMontage;
    
    STALKER2_API FSmartCoverAnimationMainLoopData();
};

