#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "RazorAnomaly.generated.h"

class UAkRtpc;
class UFXSystemAsset;
class UNiagaraComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API ARazorAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RootComponentPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkRtpc> RazorIntensityRTPCPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMeshPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* DamageVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* AIDamageVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ProjectileDestructionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ThrowableDestructionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* RazorActiveVFX;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RazorIntensityRTPC;
    
public:
    ARazorAnomaly(const FObjectInitializer& ObjectInitializer);

};

