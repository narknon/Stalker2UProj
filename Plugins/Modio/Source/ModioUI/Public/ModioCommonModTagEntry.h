#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonModTagEntry.generated.h"

class UModioCommonButtonBase;
class UModioCommonCheckBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModTagEntry : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* TagButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonCheckBox* TagCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleSelection;
    
public:
    UModioCommonModTagEntry();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTag(const FString& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSelected(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAllowMultipleSelection(bool bInAllowMultipleSelection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowMultipleSelection() const;
    
};

