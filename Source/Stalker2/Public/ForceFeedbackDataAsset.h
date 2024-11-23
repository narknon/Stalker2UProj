#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ProcessorsArray.h"
#include "ForceFeedbackDataAsset.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UForceFeedbackDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FProcessorsArray> TriggerToProcessors;
    
public:
    UForceFeedbackDataAsset();

};

