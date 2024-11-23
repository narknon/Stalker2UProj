#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioModTagOptions.h"
#include "ModioTagOptionsUI.generated.h"

class UModioTagInfoUI;

UCLASS(Blueprintable)
class MODIOUICORE_API UModioTagOptionsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModTagOptions Underlying;
    
    UModioTagOptionsUI();

    UFUNCTION(BlueprintCallable)
    TArray<UModioTagInfoUI*> GetTagCategoriesForUI();
    
};

