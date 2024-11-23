#pragma once
#include "CoreMinimal.h"
#include "ModioModTagInfo.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModTagGroupList.generated.h"

class UModioCommonModTagEntry;
class UModioCommonTextBlock;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModTagGroupList : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonModTagEntry> TagEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* TagGroupNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TagsContainer;
    
public:
    UModioCommonModTagGroupList();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSelection(UModioCommonModTagEntry* ModTagEntry, bool bIsSelected);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTagsGroup(const FModioModTagInfo& TagInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetSelectedTagGroupValues(const TArray<FString>& TagGroupValues, bool bSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetTagsSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSelectedTagGroupValues(UPARAM(Ref) TArray<FString>& OutSelectedTagGroupValues) const;
    
};

