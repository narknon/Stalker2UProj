#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ModioCommonAuthParamsSettings.h"
#include "ModioCommonCollectionParamsSettings.h"
#include "ModioCommonEmailAuthCodeParamsSettings.h"
#include "ModioCommonEmailAuthLoadingParamsSettings.h"
#include "ModioCommonEmailAuthParamsSettings.h"
#include "ModioCommonErrorWithRetryParamsSettings.h"
#include "ModioCommonFeaturedParamsSettings.h"
#include "ModioCommonFilteredModListParams.h"
#include "ModioCommonModBrowserParamsSettings.h"
#include "ModioCommonModDetailsParamsSettings.h"
#include "ModioCommonModEntryParamsSettings.h"
#include "ModioCommonModGalleryParamsSettings.h"
#include "ModioCommonModOperationTrackerParamsSettings.h"
#include "ModioCommonQuickAccessParamsSettings.h"
#include "ModioCommonReportEmailParamsSettings.h"
#include "ModioCommonReportMessageParamsSettings.h"
#include "ModioCommonReportParamsSettings.h"
#include "ModioCommonReportReasonParamsSettings.h"
#include "ModioCommonReportSummaryParamsSettings.h"
#include "ModioCommonSearchParamsSettings.h"
#include "ModioCommonStorageSpaceTrackerParamsSettings.h"
#include "ModioCommonTermsOfUseParamsSettings.h"
#include "ModioCommonUserProfileWidgetParamsSettings.h"
#include "ModioCommonUISettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=ModioCommonUISettings)
class MODIOUI_API UModioCommonUISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCollectionModDisableUI;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonAuthParamsSettings AuthParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonEmailAuthCodeParamsSettings EmailAuthCodeParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonEmailAuthLoadingParamsSettings EmailAuthLoadingParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonEmailAuthParamsSettings EmailAuthParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonTermsOfUseParamsSettings TermsOfUseParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonFilteredModListParams FilteredModListParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonCollectionParamsSettings CollectionParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonFeaturedParamsSettings FeaturedParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonModBrowserParamsSettings ModBrowserParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonModDetailsParamsSettings ModDetailsParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonModEntryParamsSettings ModEntryParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonModGalleryParamsSettings ModGalleryParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonModOperationTrackerParamsSettings ModOperationTrackerParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonQuickAccessParamsSettings QuickAccessParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonReportParamsSettings ReportParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonReportReasonParamsSettings ReportReasonParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonReportEmailParamsSettings ReportEmailParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonReportMessageParamsSettings ReportMessageParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonReportSummaryParamsSettings ReportSummaryParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonSearchParamsSettings SearchParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonStorageSpaceTrackerParamsSettings StorageSpaceTrackerParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonUserProfileWidgetParamsSettings UserProfileParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonErrorWithRetryParamsSettings ErrorWithRetryParams;
    
    UModioCommonUISettings();

};

