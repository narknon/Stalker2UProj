#pragma once
#include "CoreMinimal.h"
#include "EModioSortDirection.h"
#include "EModioSortFieldType.h"
#include "EModioEnabledFilterType.h"
#include "EModioInstalledFilterType.h"
#include "EModioManualSortType.h"
#include "ModioModCategoryParams.generated.h"

USTRUCT(BlueprintType)
struct MODIOUICORE_API FModioModCategoryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExcludedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioSortDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioSortFieldType SortField;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchKeywords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioInstalledFilterType InstalledField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioEnabledFilterType EnabledFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioManualSortType ManualSortField;
    
    FModioModCategoryParams();
};

