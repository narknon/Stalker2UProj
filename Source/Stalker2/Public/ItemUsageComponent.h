#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractObject.h"
#include "ItemUsageComponent.generated.h"

class UInteractionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UItemUsageComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractObject> ObjectsNeededToInteract;
    
public:
    UItemUsageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveAffectedComponent(UInteractionComponent* InteractionComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyItemNeededToInteract() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeRequiredItems();
    
    UFUNCTION(BlueprintCallable)
    void AddAffectedComponent(UInteractionComponent* InteractionComponent);
    
};

