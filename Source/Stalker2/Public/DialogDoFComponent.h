#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogDoFComponent.generated.h"

class AWeatherController;
class UWorld;

UCLASS(Blueprintable, DefaultConfig, Config=DialogSystem)
class STALKER2_API UDialogDoFComponent : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AWeatherController> WeatherController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> CachedWorld;
    
public:
    UDialogDoFComponent();

};

