#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseInteractableAction.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STALKER2_API UBaseInteractableAction : public UObject {
    GENERATED_BODY()
public:
    UBaseInteractableAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunAlternativeAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteract();
    
};

