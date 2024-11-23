#pragma once
#include "CoreMinimal.h"
#include "ModioLegendData.generated.h"

class UModioLegendModel;

USTRUCT(BlueprintType)
struct STALKER2_API FModioLegendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UModioLegendModel* BrowseShortcutsModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UModioLegendModel* DetailsShortcutsModel;
    
    FModioLegendData();
};

