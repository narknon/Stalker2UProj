#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "UserAchievements.h"
#include "AchievementManager.generated.h"

UCLASS(Blueprintable)
class UAchievementManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FUserAchievements> UsersToProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserAchievements DefaultUserAchievements;
    
public:
    UAchievementManager();

};

