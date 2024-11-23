#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.h"
#include "ERank.h"
#include "StructConditionalGeneration.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FStructConditionalGeneration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RefreshGameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERank> PlayerRanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGameDifficulty> Difficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReputationThreshold;
    
    FStructConditionalGeneration();
};

