#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDamageSource.h"
#include "EDamageType.h"
#include "GameplayEventData.h"
#include "HitEventData.generated.h"

UCLASS(Blueprintable)
class UHitEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DamageHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DamageImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageType DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageSource DamageSource;
    
public:
    UHitEventData();

};

