#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMediaIOStandardType.h"
#include "MediaIOMode.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaIOMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Resolution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOStandardType Standard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeviceModeIdentifier;
    
    FMediaIOMode();
};

