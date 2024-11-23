#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputMappingSettingsElementModels.h"
#include "InputMappingSettingsModel.generated.h"

UCLASS(Blueprintable)
class UInputMappingSettingsModel : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingSettingsElementModels> ElementsModels;
    
public:
    UInputMappingSettingsModel();

};

