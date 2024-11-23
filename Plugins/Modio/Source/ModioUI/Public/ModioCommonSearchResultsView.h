#pragma once
#include "CoreMinimal.h"
#include "ModioModCategoryParams.h"
#include "ModioCommonModListBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonSearchResultsView.generated.h"

class UModioCommonButtonBase;
class UModioCommonFilteredModListView;
class UModioCommonModTagList;
class UModioCommonSearchResultsViewStyle;
class UModioCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonSearchResultsView : public UModioCommonModListBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonSearchResultsViewStyle> ModioStyle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonFilteredModListView* FilteredModListView;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* KeywordsLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* KeywordsDetailsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* CategoriesLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModTagList* CategoriesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* EditSearchButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* FilterCounterTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FModioModCategoryParams AppliedFilterParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasEverPopulated;
    
    UModioCommonSearchResultsView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSearchView();
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonSearchResultsViewStyle> InStyle);
    
};

