#pragma once
#include "CoreMinimal.h"
#include "EPrototypeClass.h"
#include "PrototypeSID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FPrototypeSID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPrototypeClass PrototypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Subtype;
    
public:
    FPrototypeSID();
};

