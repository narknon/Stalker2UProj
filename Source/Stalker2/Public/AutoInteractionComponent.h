#pragma once
#include "CoreMinimal.h"
#include "AutoInteractionData.h"
#include "InteractionComponent.h"
#include "AutoInteractionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAutoInteractionComponent : public UInteractionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoInteractionData InteractionData;
    
public:
    UAutoInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

