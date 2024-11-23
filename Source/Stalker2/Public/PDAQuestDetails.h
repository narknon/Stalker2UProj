#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "EJournalState.h"
#include "EQuestRewardType.h"
#include "OnHoveredDetailsElementDelegate.h"
#include "OnStageSlotHoverDelegate.h"
#include "OnUpdateQuestListDelegate.h"
#include "QuestStageSelectSettings.h"
#include "QuestStatusSettings.h"
#include "TaskStatusSettings.h"
#include "PDAQuestDetails.generated.h"

class UHorizontalBox;
class UImage;
class UPDAQuestDescription;
class UPDAQuestTaskContainer;
class UPDAQuestTaskSlot;
class UPanelWidget;
class UTextWidget;
class UTexture2D;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAQuestDetails : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* QuestInfoBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* QuestLogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* TaskText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* RewardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* RewardBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAQuestDescription* DescriptionQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* QuestNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* QuestStatusText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* RewardContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAQuestTaskContainer* TaskContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJournalState, FQuestStatusSettings> StatusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultQuestIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJournalState, FTaskStatusSettings> TaskStatusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStageSelectSettings SelectedStatusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStageSelectSettings UnSelectedStatusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EQuestRewardType, UTexture2D*> RewardSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleTextIdMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleTextIdSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleIdTaitlMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleIdTaitlSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleTextIdDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskListSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TaskLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DescriptionLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardLocalizationSID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoveredDetailsElement OnHoveredDetailsElement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateQuestList OnUpdateQuestList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStageSlotHover OnStageSlotHover;
    
    UPDAQuestDetails();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStageSlotHover();
    
    UFUNCTION(BlueprintCallable)
    void UpdateStageHover(bool bIsStageHovered);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDescriptionHover(bool bIsHovered);
    
    UFUNCTION(BlueprintCallable)
    void StageClick(UPDAQuestTaskSlot* InSlot);
    
};

