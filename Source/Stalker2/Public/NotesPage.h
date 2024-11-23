#pragma once
#include "CoreMinimal.h"
#include "BackgroundSettings.h"
#include "EMappingContext.h"
#include "ENoteType.h"
#include "PDAPage.h"
#include "NotesPage.generated.h"

class UPDANotePanel;
class UPDANotesButton;
class UPDANotesDetails;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UNotesPage : public UPDAPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDANotesDetails* NoteDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDANotesButton* ButtonAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDANotesButton* ButtonFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDANotesButton* ButtonNotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDANotesButton* ButtonAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDANotePanel* NotePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* PlayAudioHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultOpenFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotesSlotListScrollTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENoteType, FBackgroundSettings> BackgroundSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonActionLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonActionRight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappingContext MappingContext;
    
public:
    UNotesPage();

    UFUNCTION(BlueprintCallable)
    void UIPDANavigationUp();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationRight();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationPlayAudio();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigatioNoteUp();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigatioNoteDown();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationLeft();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationDown();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationButtonRelease();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SlotTransitionUp();
    
    UFUNCTION(BlueprintCallable)
    void ShowDetails(const bool bEmpty);
    
    UFUNCTION(BlueprintCallable)
    void ClickButtonMenu(const FName ButtonId);
    
};

