#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseManager.h"
#include "TimeManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UTimeManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CurrentDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime WeatherDate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GameTimeSecondsDouble;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WeatherTimeSeconds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GameTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTickDeltaTimeNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeatherSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TickCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixedFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameSecondsClamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartDate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UnixTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LastUnixTimeUpdateTick;
    
public:
    UTimeManager();

};

