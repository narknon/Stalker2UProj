#pragma once
#include "CoreMinimal.h"
#include "AchievementData.generated.h"

class UAchievementTracker;

USTRUCT(BlueprintType)
struct FAchievementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAchievementTracker* Tracker;
    
    STALKER2_API FAchievementData();
};

