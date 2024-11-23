#pragma once
#include "CoreMinimal.h"
#include "BaseTickAggregationCollection.h"
#include "BaseModelCollection.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FBaseModelCollection : public FBaseTickAggregationCollection {
    GENERATED_BODY()
public:
    FBaseModelCollection();
};

