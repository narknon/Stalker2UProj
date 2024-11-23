#pragma once
#include "CoreMinimal.h"
#include "MenuButtonModel.h"
#include "ShortcutData.h"
#include "ModioLegendModel.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UModioLegendModel : public UMenuButtonModel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShortcutData> SubViewShortcutsRightSide;
    
public:
    UModioLegendModel();

};

