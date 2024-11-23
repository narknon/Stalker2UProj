#pragma once
#include "CoreMinimal.h"
#include "SingleClickComponent.h"
#include "TopazSingleClickComponent.generated.h"

class ATopazScanner;
class UInteractableAnimCollection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UTopazSingleClickComponent : public USingleClickComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractableAnimCollection* ActivationAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractableAnimCollection* CollectAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomInteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATopazScanner* OwnerScanner;
    
public:
    UTopazSingleClickComponent(const FObjectInitializer& ObjectInitializer);

};

