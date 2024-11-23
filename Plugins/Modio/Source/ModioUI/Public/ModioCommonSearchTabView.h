#pragma once
#include "CoreMinimal.h"
#include "ModioFilterParams.h"
#include "ModioModCategoryParams.h"
#include "Types/SlateEnums.h"
#include "ModioCommonSearchViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonSearchTabView.generated.h"

class UModioCommonBorder;
class UModioCommonButtonBase;
class UModioCommonEditableTextBox;
class UModioCommonFilteringView;
class UModioCommonSearchTabViewStyle;
class UModioCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonSearchTabView : public UModioCommonSearchViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonSearchTabViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonBorder* InternalBackgroundBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonBorder* OverlayBackgroundBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* SearchTabTitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonFilteringView* FilteringView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonEditableTextBox* SearchTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* SearchButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* ResetButton;
    
public:
    UModioCommonSearchTabView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSearchResults();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonSearchTabViewStyle> InStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSearchTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FModioModCategoryParams GetFilterParamsWrapper() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FModioFilterParams GetFilterParams() const;
    
};

