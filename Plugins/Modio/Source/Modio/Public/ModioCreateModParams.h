#pragma once
#include "CoreMinimal.h"
#include "ModioCreateModParams.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioCreateModParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathToLogoFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Summary;
    
    FModioCreateModParams();
};

