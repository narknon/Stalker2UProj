#pragma once
#include "CoreMinimal.h"
#include "EModioModManagementEventType.h"
#include "ModioErrorCode.h"
#include "ModioModID.h"
#include "ModioModManagementEvent.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModManagementEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioModManagementEventType Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioErrorCode Status;
    
    FModioModManagementEvent();
};

