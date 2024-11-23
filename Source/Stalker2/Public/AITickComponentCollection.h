#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "AITickComponentCollection.generated.h"

class UAITickComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAITickComponentCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAITickComponent*> AITickComponents;
    
public:
    FAITickComponentCollection();
};

