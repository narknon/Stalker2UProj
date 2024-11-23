#pragma once
#include "CoreMinimal.h"
#include "GuidActorComponent.h"
#include "OnHiddenStateChangedDelegate.h"
#include "OnUnfoldingEndedDelegate.h"
#include "OnUnfoldingStartedDelegate.h"
#include "SaveableComponent.h"
#include "LadderComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULadderComponent : public UGuidActorComponent, public ISaveableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* UnfoldingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HorizontalOffsetCurve;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnfoldingStarted OnUnfoldingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnfoldingEnded OnUnfoldingEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHiddenStateChanged OnHiddenStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTopBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLadderHidden;
    
public:
    ULadderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTopBlocked(const bool InbTopBlocked);
    
    UFUNCTION(BlueprintCallable)
    void SetLadderHidden(const bool InbLadderHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderHidden() const;
    

    // Fix for true pure virtual functions not being implemented
};

