#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModCategoryParams.h"
#include "ModioModCategoryParamsUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioModCategoryParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModCategoryParams Underlying;
    
    UModioModCategoryParamsUI();

};

