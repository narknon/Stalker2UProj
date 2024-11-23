#pragma once
#include "CoreMinimal.h"
#include "ECauseOfDeath.h"
#include "EDamageSource.h"
#include "EDamageType.h"
#include "GameplayEventData.h"
#include "DeathEventData.generated.h"

UCLASS(Blueprintable)
class UDeathEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageType DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageSource DamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECauseOfDeath CauseOfDeath;
    
    UDeathEventData();

};

