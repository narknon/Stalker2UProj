#pragma once
#include "CoreMinimal.h"
#include "MediaIODevice.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaIODevice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeviceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeviceIdentifier;
    
    FMediaIODevice();
};

