#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EModioSortDirection.h"
#include "EModioSortFieldType.h"
#include "ModioFeaturedCategoryParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MODIOUICORE_API UModioFeaturedCategoryParams : public UObject {
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
    
    UModioFeaturedCategoryParams();

};

