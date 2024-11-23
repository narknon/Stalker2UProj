#pragma once
#include "CoreMinimal.h"
#include "InteractionComponent.h"
#include "OnSingleClickInteractFailedDelegate.h"
#include "SingleClickInteractionData.h"
#include "SingleClickComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API USingleClickComponent : public UInteractionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSingleClickInteractFailed OnSingleClickInteractFailed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleClickInteractionData InteractionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedSendFailedEvent;
    
public:
    USingleClickComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNeededFailedEvent(const bool bNeedEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSendFailedEvent() const;
    
};

