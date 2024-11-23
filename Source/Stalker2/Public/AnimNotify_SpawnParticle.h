#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_SpawnParticle.generated.h"

class UFXSystemAsset;

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_SpawnParticle : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ParticlePFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneToSpawnOnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttachToBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListenCollision;
    
    UAnimNotify_SpawnParticle();

};

