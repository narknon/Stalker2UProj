#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "PresentationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class STALKER2_API UPresentationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePresentationSubsystem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DemoPopupTitleSID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DemoPopupDescriptionSID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestNodeToStopPresentation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DemoPopupContinuePlaySID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DemoPopupToMainMenuSID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PresentationTimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowEndPopup;
    
public:
    UPresentationSettings();

};

