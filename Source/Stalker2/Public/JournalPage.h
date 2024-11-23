#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDetailsElementType.h"
#include "PDAPage.h"
#include "JournalPage.generated.h"

class UHintInputController;
class UPDAQuestButton;
class UPDAQuestDetails;
class UPDAQuestPanel;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UJournalPage : public UPDAPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAQuestButton* CurrentQuestButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAQuestButton* DoneQuestButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAQuestPanel* PDAQuestPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAQuestDetails* QuestDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* SelectQuestHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintSelectPanelLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintSelectPanelRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ButtonHintTransitionToMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecondaryQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FinishQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FeilQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CanceledQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MainQuestTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultQuestTint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestSlotListScrollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TabTransitionTime;
    
public:
    UJournalPage();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStageOnDetailed();
    
    UFUNCTION(BlueprintCallable)
    void UpdateHoverDetailsElement(const bool bHovered, const EDetailsElementType ElementType);
    
    UFUNCTION(BlueprintCallable)
    void UpdateButton(const int32 IndexUpdateButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void UIPDATransitionToMarkerPosition();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationUp();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationSelectPanelRight();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationSelectPanelLeft();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationSelect();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationRightHint();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationRight();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationReleased();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationLeftHint();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationLeft();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationDown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StageSlotHover();
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowDetails(bool bEmpty);
    
    UFUNCTION(BlueprintCallable)
    void SelectedSlotWithMouse();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClickButtonQuest(const FName ButtonId);
    
};

