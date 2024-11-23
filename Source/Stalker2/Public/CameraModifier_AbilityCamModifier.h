#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraModifier.h"
#include "AbilityCamModifierStage.h"
#include "OnStageChangedDelegate.h"
#include "CameraModifier_AbilityCamModifier.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_AbilityCamModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStageChanged OnStageChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityCamModifierStage> Stages;
    
public:
    UCameraModifier_AbilityCamModifier();

    UFUNCTION(BlueprintCallable)
    void UpdateCameraTargetLocation(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraTargetLocation();
    
};

