#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "ShowPopupAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UShowPopupAction : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DescriptionSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AcceptButtonNameSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeclineButtonNameSID;
    
public:
    UShowPopupAction();

};

