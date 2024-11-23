#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "GotoViewAction.generated.h"

class UMenuSubViewBase;

UCLASS(Blueprintable, EditInlineNew)
class UGotoViewAction : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMenuSubViewBase> DestinationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeBehaviourOnPresentation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CampaignIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DifficultyPrototypeSID;
    
public:
    UGotoViewAction();

};

