#pragma once
#include "CoreMinimal.h"
#include "MediaIOConnection.h"
#include "MediaIOMode.h"
#include "MediaIOConfiguration.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaIOConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaIOConnection MediaConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaIOMode MediaMode;
    
    FMediaIOConfiguration();
};

