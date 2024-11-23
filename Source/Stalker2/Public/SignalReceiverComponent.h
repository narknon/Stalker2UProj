#pragma once
#include "CoreMinimal.h"
#include "GuidActorComponent.h"
#include "SignalReceiverComponentReceiveSignatureDelegate.h"
#include "SignalReceiverComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API USignalReceiverComponent : public UGuidActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSignalReceiverComponentReceiveSignature OnSignalReceived;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeUsedInQuests;
    
public:
    USignalReceiverComponent(const FObjectInitializer& ObjectInitializer);

};

