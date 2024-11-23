#pragma once
#include "CoreMinimal.h"
#include "ModioCreateModFileParams.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioCreateModFileParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathToModRootDirectory;
    
    FModioCreateModFileParams();
};

