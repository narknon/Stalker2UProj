#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModioUserID.h"
#include "ModioUser.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioUserID userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DateOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProfileUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayNamePortal;
    
    FModioUser();
};

