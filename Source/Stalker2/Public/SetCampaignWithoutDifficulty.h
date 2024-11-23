#pragma once
#include "CoreMinimal.h"
#include "StartGameAction.h"
#include "SetCampaignWithoutDifficulty.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USetCampaignWithoutDifficulty : public UStartGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DifficultyPrototypeSID;
    
    USetCampaignWithoutDifficulty();

};

