#pragma once
#include "CoreMinimal.h"
#include "RecoilKeys.h"
#include "BuckRecoilKeys.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FBuckRecoilKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecoilKeys> BuckRecoilKeys;
    
    FBuckRecoilKeys();
};

