#pragma once
#include "CoreMinimal.h"
#include "EMediaIOOutputType.h"
#include "EMediaIOReferenceType.h"
#include "MediaIOConfiguration.h"
#include "MediaIOOutputConfiguration.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaIOOutputConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaIOConfiguration MediaConfiguration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOOutputType OutputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyPortIdentifier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOReferenceType OutputReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReferencePortIdentifier;
    
    FMediaIOOutputConfiguration();
};

