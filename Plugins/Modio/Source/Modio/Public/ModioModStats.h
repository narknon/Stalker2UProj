#pragma once
#include "CoreMinimal.h"
#include "ModioModStats.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModStats {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PopularityRankPosition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PopularityRankTotalMods;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DownloadsTotal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SubscribersTotal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RatingTotal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RatingPositive;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RatingNegative;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RatingPercentagePositive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RatingWeightedAggregate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RatingDisplayText;
    
    FModioModStats();
};

