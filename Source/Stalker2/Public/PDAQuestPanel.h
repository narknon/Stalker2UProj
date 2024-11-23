#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PDASlotPanelBase.h"
#include "PDAQuestPanel.generated.h"

class UPDATextBorder;
class UScenarioManager;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAQuestPanel : public UPDASlotPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATextBorder* MainQuestBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATextBorder* CancelledQuestBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATextBorder* SecondaryQuestBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* EmptySizeBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SecondEmptySizeBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MainQuestTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultQuestTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecondaryQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FinishQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FailedQuestLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CanceledQuestLocalizationSID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScenarioManager* ScenarioManager;
    
public:
    UPDAQuestPanel();

protected:
    UFUNCTION(BlueprintCallable)
    void ChangeSelectedQuestSlot(const int32 JournalQuestIndex);
    
};

