#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonFeaturedViewStyle.generated.h"

class UModioCommonSearchResultsViewStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonFeaturedViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonSearchResultsViewStyle> SearchResultsViewStyle;
    
    UModioCommonFeaturedViewStyle();

};

