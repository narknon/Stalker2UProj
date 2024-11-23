#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "ShowOverrideCampaignPopupGameStart.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UShowOverrideCampaignPopupGameStart : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DifficultyPrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DescriptionSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AcceptButtonNameSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeclineButtonNameSID;
    
public:
    UShowOverrideCampaignPopupGameStart();

};

