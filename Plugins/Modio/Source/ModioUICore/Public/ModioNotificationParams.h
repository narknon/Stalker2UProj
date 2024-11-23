#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioNotificationParams.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MODIOUICORE_API FModioNotificationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioErrorCode ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* NotificationContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FModioNotificationParams();
};

