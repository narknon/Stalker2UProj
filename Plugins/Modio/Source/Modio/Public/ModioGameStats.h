#pragma once
#include "CoreMinimal.h"
#include "ModioGameID.h"
#include "ModioGameStats.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioGameStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioGameID GameId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ModCountTotal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ModDownloadsToday;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ModDownloadsTotal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ModDownloadsDailyAverage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ModSubscribersTotal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DateExpires;
    
    FModioGameStats();
};

