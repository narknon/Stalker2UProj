#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponDisplayInterface.h"
#include "GaussDisplay.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class UPlayerOpticScopeComponent;

UCLASS(Blueprintable)
class STALKER2_API AGaussDisplay : public AActor, public IWeaponDisplayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DischargeAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ReloadVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ReloadVFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPlayerOpticScopeComponent> OpticScopeComponent;
    
public:
    AGaussDisplay(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

