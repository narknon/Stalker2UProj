#pragma once
#include "CoreMinimal.h"
#include "RazerChromaEvent.generated.h"

USTRUCT(BlueprintType)
struct FRazerChromaEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopAnimation;
    
    STALKER2_API FRazerChromaEvent();
};

