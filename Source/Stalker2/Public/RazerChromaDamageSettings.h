#pragma once
#include "CoreMinimal.h"
#include "EDamageSource.h"
#include "RazerChromaEvent.h"
#include "RazerChromaDamageSettings.generated.h"

USTRUCT(BlueprintType)
struct FRazerChromaDamageSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRazerChromaEvent Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDamageSource> DamageSources;
    
    STALKER2_API FRazerChromaDamageSettings();
};

