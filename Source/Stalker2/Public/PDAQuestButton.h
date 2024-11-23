#pragma once
#include "CoreMinimal.h"
#include "PDAButtonBase.h"
#include "PDAQuestButton.generated.h"

class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAQuestButton : public UPDAButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLocalization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ButtonLocalizationSID;
    
    UPDAQuestButton();

};

