#pragma once
#include "CoreMinimal.h"
#include "HoldInteractionData.h"
#include "InteractionComponent.h"
#include "InteractionDelegateDelegate.h"
#include "HoldComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UHoldComponent : public UInteractionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate OnHoldStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate OnHoldInterruptedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate OnHoldFinishedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldInteractionData InteractionData;
    
public:
    UHoldComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldStarted() const;
    
};

