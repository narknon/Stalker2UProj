#pragma once
#include "CoreMinimal.h"
#include "GSCNavModifierVolume.h"
#include "Templates/SubclassOf.h"
#include "CooldownZone.generated.h"

class UNavArea;

UCLASS(Blueprintable)
class STALKER2_API ACooldownZone : public AGSCNavModifierVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> RestrictionArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    ACooldownZone(const FObjectInitializer& ObjectInitializer);

};

