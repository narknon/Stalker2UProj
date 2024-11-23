#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityPrototypeSID.h"
#include "CustomDamageHandleComponent.h"
#include "FaustBossComponent.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UFaustBossComponent : public UActorComponent, public ICustomDamageHandleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityPrototypeSID WoundedPsyStrikeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* InvulnerablePhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* OriginalPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WoundedDialogPrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPhases;
    
public:
    UFaustBossComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WoundedBark();
    

    // Fix for true pure virtual functions not being implemented
};

