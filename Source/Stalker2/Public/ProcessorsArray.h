#pragma once
#include "CoreMinimal.h"
#include "ProcessorsArray.generated.h"

class UForceFeedbackProcessorBase;

USTRUCT(BlueprintType)
struct STALKER2_API FProcessorsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UForceFeedbackProcessorBase*> ListOfProcessors;
    
    FProcessorsArray();
};

