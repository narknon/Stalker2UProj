#pragma once
#include "CoreMinimal.h"
#include "ETopazScannerState.h"
#include "GuidActorComponent.h"
#include "OnTopazStateChangedDelegate.h"
#include "SaveableComponent.h"
#include "TopazScannerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UTopazScannerComponent : public UGuidActorComponent, public ISaveableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTopazStateChanged OnTopazStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETopazScannerState InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanningTime;
    
public:
    UTopazScannerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStateStartTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETopazScannerState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState();
    

    // Fix for true pure virtual functions not being implemented
};

