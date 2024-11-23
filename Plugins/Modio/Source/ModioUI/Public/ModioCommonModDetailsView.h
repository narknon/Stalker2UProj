#pragma once
#include "CoreMinimal.h"
#include "EModioRating.h"
#include "ModioErrorCode.h"
#include "ModioUnsigned64.h"
#include "ModioUIAsyncOperationWidget.h"
#include "ModioCommonModDetailsViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModDetailsView.generated.h"

class UButton;
class UHorizontalBox;
class UModioCommonButtonBase;
class UModioCommonCheckBox;
class UModioCommonErrorWithRetryWidget;
class UModioCommonModDetailsViewStyle;
class UModioCommonModGalleryView;
class UModioCommonModTagList;
class UModioCommonProgressBar;
class UModioCommonScrollBox;
class UModioCommonTextBlock;
class UVerticalBox;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModDetailsView : public UModioCommonModDetailsViewBase, public IModioUIAsyncOperationWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonModDetailsViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ModNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* SubscribeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* RateUpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* RateDownButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* ReportButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CollectionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ModSummaryTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ModFullDescriptionLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ModFullDescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* OperationContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ProgressBarContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* StatusContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonCheckBox* InstalledCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonCheckBox* EnabledCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* OperationProgressLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* OperationProgressTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonProgressBar* OperationProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* FileSizeLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* FileSizeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* LastUpdatedLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* LastUpdatedTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ReleaseDateLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ReleaseDateTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* SubscribersLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* SubscribersTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* CreatedByLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* CreatedByTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* TagsLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModTagList* TagsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModGalleryView* ModGalleryView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonScrollBox* ModioCommonDescriptionScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* SpeedDetailsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ModDetailsLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonErrorWithRetryWidget* ErrorWithRetryWidget;
    
public:
    UModioCommonModDetailsView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSpeed(FModioUnsigned64 DeltaBytes, double DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOperationProgressPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOperationProgressBytes(FModioUnsigned64 Current, FModioUnsigned64 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputActions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowProgress();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonModDetailsViewStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRatingSubmissionComplete(FModioErrorCode ErrorCode, EModioRating SubmittedRating);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSwitchEnabledClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSubscribeClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleReportClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRateUpClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRateDownClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCollectionClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateTopButtonsInputBindings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateTagsInputBindings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateBottomButtonsInputBindings();
    

    // Fix for true pure virtual functions not being implemented
};

