#pragma once
#include "CoreMinimal.h"
#include "GameGraphSceneProxyDrawParams.generated.h"

USTRUCT(BlueprintType)
struct FGameGraphSceneProxyDrawParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMinMaxPathColoring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAgentSupportMaskColoring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePolyBindConnectivityColoring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugContextualActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PolyBindConnectivityNavDataIdx;
    
    STALKER2_API FGameGraphSceneProxyDrawParams();
};

