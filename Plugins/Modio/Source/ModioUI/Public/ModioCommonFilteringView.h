#pragma once
#include "CoreMinimal.h"
#include "ModioModTagInfo.h"
#include "ModioModCategoryParams.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonFilteringView.generated.h"

class UModioCommonModTagGroupList;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonFilteringView : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* FilteringTagsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonModTagGroupList> TagGroupListClass;
    
public:
    UModioCommonFilteringView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SynchronizeFilterParams(const TArray<FString>& PreviouslySelectedTagGroupValues);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetSelectedTagGroupValues(const TArray<FString>& TagGroupValues, bool bSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetFiltering();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetSelectedTagGroupValues(UPARAM(Ref) TArray<FString>& OutSelectedTagGroupValues) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FModioModCategoryParams GetFilterParamsWrapper() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddModTagInfo(const FModioModTagInfo& ModTagInfo);
    
};

