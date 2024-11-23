#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "EWeather.h"
#include "CustomConsoleManagerDR.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerDR : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerDR();

    UFUNCTION(BlueprintCallable, Exec)
    void XSwitchToWeather(const EWeather WeatherType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XInitializeBenchmarkSequence(const FString& AssetPath, const FString& AssetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XForceWeather(const EWeather WeatherType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XEnableCinematicMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDisableCinematicMode();
    
};

