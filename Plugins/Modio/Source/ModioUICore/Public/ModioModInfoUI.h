#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModInfo.h"
#include "ModioModInfoUIDetails.h"
#include "ModioModInfoUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioModInfoUI : public UObject, public IModioModInfoUIDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModInfo Underlying;
    
    UModioModInfoUI();


    // Fix for true pure virtual functions not being implemented
};

