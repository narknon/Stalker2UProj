#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "GameplayEventManager.generated.h"

class UGameplayEventData;

UCLASS(Blueprintable)
class STALKER2_API UGameplayEventManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UGameplayEventData*> EventDataPool;
    
public:
    UGameplayEventManager();

};

