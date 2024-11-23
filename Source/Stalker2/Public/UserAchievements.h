#pragma once
#include "CoreMinimal.h"
#include "AchievementData.h"
#include "UserAchievements.generated.h"

USTRUCT(BlueprintType)
struct FUserAchievements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FAchievementData> Achievements;
    
    STALKER2_API FUserAchievements();
};

