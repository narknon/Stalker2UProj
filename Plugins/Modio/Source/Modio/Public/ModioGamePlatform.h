#pragma once
#include "CoreMinimal.h"
#include "EModioModfilePlatform.h"
#include "ModioGamePlatform.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioGamePlatform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioModfilePlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Moderated;
    
    FModioGamePlatform();
};

