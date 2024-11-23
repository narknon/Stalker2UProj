#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ProjectileImpactFXData.h"
#include "ProjectileImpactEffectSubsystem.generated.h"

class APC;

UCLASS(Blueprintable)
class UProjectileImpactEffectSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FProjectileImpactFXData> ImpactRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APC* CachedPlayerView;
    
public:
    UProjectileImpactEffectSubsystem();

};

