#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BossInterface.h"
#include "CustomDamageHandleComponent.h"
#include "OnCoilsDamageThresholdPassedDelegate.h"
#include "OnCoilsHeatedDelegate.h"
#include "OnCoilsStateChangedDelegate.h"
#include "OnShieldStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "KorshunovBossComponent.generated.h"

class ATelekineticShield;
class UMaterialInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UKorshunovBossComponent : public UActorComponent, public ICustomDamageHandleComponent, public IBossInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShieldStateChanged OnShieldStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoilsStateChanged OnCoilsStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoilsHeated OnCoilsHeated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoilsDamageThresholdPassed OnCoilsDamageThresholdPassed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PhasesHealthThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeResistancePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CutsceneSequenceTrackingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldArmorHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoilsHeatingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CoilsMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATelekineticShield> TelekineticShieldType;
    
public:
    UKorshunovBossComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

