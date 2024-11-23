#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PlayerStorageData.generated.h"

class UTooltipRecord;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPlayerStorageData : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTooltipRecord* ItemsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTooltipRecord* ItemsWeight;
    
public:
    UPlayerStorageData();

};

