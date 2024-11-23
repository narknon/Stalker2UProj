#pragma once
#include "CoreMinimal.h"
#include "EMediaIOAutoDetectableTimecodeFormat.h"
#include "MediaIOConfiguration.h"
#include "MediaIOVideoTimecodeConfiguration.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaIOVideoTimecodeConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaIOConfiguration MediaConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOAutoDetectableTimecodeFormat TimecodeFormat;
    
    FMediaIOVideoTimecodeConfiguration();
};

