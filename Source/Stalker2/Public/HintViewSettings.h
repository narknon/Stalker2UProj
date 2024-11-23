#pragma once
#include "CoreMinimal.h"
#include "EHintProgressType.h"
#include "EMappingContext.h"
#include "HintViewSettings.generated.h"

USTRUCT(BlueprintType)
struct FHintViewSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappingContext MappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputMappingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHintProgressType ProgressType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomInputAction;
    
    STALKER2_API FHintViewSettings();
};

