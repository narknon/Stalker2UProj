#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModCategoryParams.h"
#include "EModioCommonSearchViewType.h"
#include "ModioSearchResultsParamsUI.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioSearchResultsParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModCategoryParams FilterParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioCommonSearchViewType SearchType;
    
    UModioSearchResultsParamsUI();

};

