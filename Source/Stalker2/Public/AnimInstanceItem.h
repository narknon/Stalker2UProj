#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimInstanceItem.generated.h"

class UItemAnimCollection;

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstanceItem : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemAnimCollection* ItemAnimCollection;
    
public:
    UAnimInstanceItem();

};

