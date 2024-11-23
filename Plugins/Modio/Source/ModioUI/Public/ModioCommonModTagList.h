#pragma once
#include "CoreMinimal.h"
#include "ModioModTag.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModTagList.generated.h"

class UModioCommonModTagEntry;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModTagList : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonModTagEntry> TagEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TagsContainer;
    
public:
    UModioCommonModTagList();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTagsString(const TArray<FString>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTags(const TArray<FModioModTag>& ModTags);
    
};

