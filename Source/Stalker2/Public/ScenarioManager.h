#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "ScenarioManager.generated.h"

class UPlaySoundQuestNodeListener;

UCLASS(Blueprintable)
class STALKER2_API UScenarioManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPlaySoundQuestNodeListener*> PlaySoundQuestNodeListeners;
    
public:
    UScenarioManager();

};

