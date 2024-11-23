#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GuidInterface.h"
#include "PrototypeSID.h"
#include "UIDActor_Bed.h"
#include "BedView.generated.h"

class UBedHoldComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API ABedView : public AUIDActor_Bed, public IGuidInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBedHoldComponent* SleepComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID HappyHoursSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BedMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSleepinessValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreEmission;
    
public:
    ABedView(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSleepStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSleepEnded();
    
public:
    UFUNCTION(BlueprintCallable)
    void Interact();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetGUID() const override PURE_VIRTUAL(GetGUID, return FGuid{};);
    
};

