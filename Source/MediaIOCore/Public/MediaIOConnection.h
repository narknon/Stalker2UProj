#pragma once
#include "CoreMinimal.h"
#include "EMediaIOQuadLinkTransportType.h"
#include "EMediaIOTransportType.h"
#include "MediaIODevice.h"
#include "MediaIOConnection.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaIOConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaIODevice Device;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName protocol;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOTransportType TransportType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOQuadLinkTransportType QuadTransportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PortIdentifier;
    
    FMediaIOConnection();
};

