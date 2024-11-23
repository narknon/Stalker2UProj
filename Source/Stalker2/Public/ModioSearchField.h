#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Types/SlateEnums.h"
#include "ModioSearchField.generated.h"

class UHintInputController;
class UModioCommonEditableTextBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioSearchField : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* SearchHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonEditableTextBox* SearchTextBox;
    
public:
    UModioSearchField();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnTextCommitted(const FText& Text, const TEnumAsByte<ETextCommit::Type> CommitMethod);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSearchKeywords() const;
    
};

