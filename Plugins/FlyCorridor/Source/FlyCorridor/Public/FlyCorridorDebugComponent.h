#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Debug/DebugDrawComponent.h"
#include "FlyCorridorDebugComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FLYCORRIDOR_API UFlyCorridorDebugComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CorridorFindingTime;
    
public:
    UFlyCorridorDebugComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowPassedPath();
    
    UFUNCTION(BlueprintCallable)
    void ShowCorridor(const UAnimMontage* AnimMontage, const FVector& StartLocation, const FVector& EndLocation, float DrawTime, double ZScale);
    
    UFUNCTION(BlueprintCallable)
    void HidePassedPath();
    
    UFUNCTION(BlueprintCallable)
    void HideCorridor();
    
};

