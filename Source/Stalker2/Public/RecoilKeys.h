#pragma once
#include "CoreMinimal.h"
#include "RecoilKeys.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FRecoilKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    FRecoilKeys();
};

