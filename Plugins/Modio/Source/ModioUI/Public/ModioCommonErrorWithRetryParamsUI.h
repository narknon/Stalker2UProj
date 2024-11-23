#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioCommonErrorWithRetryParamsUI.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonErrorWithRetryParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorTitleTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorDescriptionTextLabel;
    
    UModioCommonErrorWithRetryParamsUI();

};

