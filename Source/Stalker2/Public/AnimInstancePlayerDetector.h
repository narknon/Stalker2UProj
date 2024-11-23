#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimInstancePlayerDetector.generated.h"

class UPlayerDetectorAnimCollection;

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstancePlayerDetector : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDetectorAnimCollection* DetectorAnimCollection;
    
public:
    UAnimInstancePlayerDetector();

};

