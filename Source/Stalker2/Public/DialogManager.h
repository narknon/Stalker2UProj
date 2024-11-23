#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "DialogManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UDialogManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
    UDialogManager();

    UFUNCTION(BlueprintCallable)
    void OnToggleAudiolog(const bool bPlayAudiolog);
    
};

