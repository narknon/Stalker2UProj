#pragma once
#include "CoreMinimal.h"
#include "EMediaIOTimecodeFormat.h"
#include "MediaIOAutoDetectableTimecodeFormat_Backup.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaIOAutoDetectableTimecodeFormat_Backup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOTimecodeFormat TimecodeFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDetect;
    
    FMediaIOAutoDetectableTimecodeFormat_Backup();
};

