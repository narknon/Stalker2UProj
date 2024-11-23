#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioFilterParams.h"
#include "ModioFilterParamsUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioFilterParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioFilterParams Underlying;
    
    UModioFilterParamsUI();

};

