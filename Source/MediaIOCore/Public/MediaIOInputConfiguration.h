#pragma once
#include "CoreMinimal.h"
#include "EMediaIOInputType.h"
#include "MediaIOConfiguration.h"
#include "MediaIOInputConfiguration.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaIOInputConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaIOConfiguration MediaConfiguration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyPortIdentifier;
    
    FMediaIOInputConfiguration();
};

