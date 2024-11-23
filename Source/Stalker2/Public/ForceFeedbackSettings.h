#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ForceFeedbackSettings.generated.h"

class UForceFeedbackDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class STALKER2_API UForceFeedbackSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UForceFeedbackDataAsset> FeedbackDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StopAllPriority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopCurrentProcessor;
    
public:
    UForceFeedbackSettings();

};

