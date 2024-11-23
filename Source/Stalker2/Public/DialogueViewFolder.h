#pragma once
#include "CoreMinimal.h"
#include "DialogueView.h"
#include "StartSelectFolderType.h"
#include "DialogueViewFolder.generated.h"

class UDialogFolder;
class UDialogueAnswer;
class UImage;
class UOverlay;
class UScrollBox;
class USelectedAnswerMark;
class UUserWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDialogueViewFolder : public UDialogueView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultFolderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    StartSelectFolderType DefaultSelectFolderSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USelectedAnswerMark* SelectedAnswerMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogFolder* FolderSlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogFolder* FolderSlot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogFolder* FolderSlot3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogFolder* FolderSlot4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogFolder* FolderSlot5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogFolder* FolderSlot6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* AnswerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ReplicOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* LeftButtonsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* RightButtonsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ButtonHintExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ButtonHintUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ButtonHintTrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* TimerProgressImage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDialogFolder*> FolderWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDialogFolder*> FolderWidgetsPool;
    
public:
    UDialogueViewFolder();

    UFUNCTION(BlueprintCallable)
    void UIDialogOpenUpgrade();
    
    UFUNCTION(BlueprintCallable)
    void UIDialogOpenTrade();
    
    UFUNCTION(BlueprintCallable)
    void UIDialogClose();
    
    UFUNCTION(BlueprintCallable)
    void UIDialogAnswerUp();
    
    UFUNCTION(BlueprintCallable)
    void UIDialogAnswerDown();
    
    UFUNCTION(BlueprintCallable)
    void UIDialogAnswerConfirm();
    
    UFUNCTION(BlueprintCallable)
    UDialogueAnswer* ChangeSelectFolder(const int32 IndexOldFolder, const int32 AxisMove);
    
};

