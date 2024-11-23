#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "CampaignManager.generated.h"

class USaveLoadIO;

UCLASS(Blueprintable)
class STALKER2_API UCampaignManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveLoadIO* SaveLoadIO;
    
public:
    UCampaignManager();

};

