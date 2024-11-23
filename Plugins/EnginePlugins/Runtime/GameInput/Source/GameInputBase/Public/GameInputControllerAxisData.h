#pragma once
#include "CoreMinimal.h"
#include "GameInputControllerAxisData.generated.h"

USTRUCT(BlueprintType)
struct GAMEINPUTBASE_API FGameInputControllerAxisData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scalar;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPackedPositveAndNegative;
    
    FGameInputControllerAxisData();
};

