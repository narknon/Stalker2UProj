#pragma once
#include "CoreMinimal.h"
#include "EModioRating.h"
#include "ModioErrorCode.h"
#include "ModioUnsigned64.h"
#include "ModioCommonModEntryBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonGenericModEntry.generated.h"

class UModioCommonBorder;
class UModioCommonButtonBase;
class UModioCommonDynamicImage;
class UModioCommonGenericModEntryStyle;
class UModioCommonProgressBar;
class UModioCommonRichTextBlock;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonGenericModEntry : public UModioCommonModEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonGenericModEntryStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonBorder* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ForegroundContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonDynamicImage* ModImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* ModNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* OperationLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* OperationDetailsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* SpeedLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* SpeedDetailsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* DownloadsLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* DownloadsDetailsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* SizeLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* SizeDetailsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* RatingPercentageTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* RatingPositiveTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* RatingNegativeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* SubscribeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* EnableButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* DisableButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* OpenModDetailsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* ForceUninstallButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonRichTextBlock* PercentProgressTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonProgressBar* PercentProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDecimalsFileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDecimalsFileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDecimalsProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDecimalsProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDecimalsSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDecimalsSpeed;
    
public:
    UModioCommonGenericModEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSpeed(FModioUnsigned64 DeltaBytes, double DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOperationProgressPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOperationProgressBytes(FModioUnsigned64 Current, FModioUnsigned64 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchSpeedVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchForceUninstallButtonVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchEnableButtonVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchDisableButtonVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchCancelButtonVisibility(bool bIsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonGenericModEntryStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRatingSubmissionComplete(FModioErrorCode ErrorCode, EModioRating Rating);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSwitchEnabledClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSubscribeClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOpenModDetailsClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleForceUninstallClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCancelClicked();
    
};

