#pragma once
#include "CoreMinimal.h"
#include "EInteractionTypeIcon.h"
#include "HintControllerBase.h"
#include "InteractHintInputController.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UInteractHintInputController : public UHintControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInteractionTypeIcon, TSoftObjectPtr<UTexture2D>> InteractionTypeIcons;
    
public:
    UInteractHintInputController();

};

