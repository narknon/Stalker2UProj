#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "ShowOverrideCampaignPopup.generated.h"

class UMenuSubViewBase;

UCLASS(Blueprintable, EditInlineNew)
class UShowOverrideCampaignPopup : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMenuSubViewBase> DestinationAfterConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DescriptionSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AcceptButtonNameSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeclineButtonNameSID;
    
public:
    UShowOverrideCampaignPopup();

};

