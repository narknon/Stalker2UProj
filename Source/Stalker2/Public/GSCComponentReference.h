#pragma once
#include "CoreMinimal.h"
#include "GSCComponentReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STALKER2_API FGSCComponentReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> OtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathToComponent;
    
    FGSCComponentReference();
};

