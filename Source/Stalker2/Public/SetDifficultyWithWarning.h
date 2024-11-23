#pragma once
#include "CoreMinimal.h"
#include "SetDifficulty.h"
#include "SetDifficultyWithWarning.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USetDifficultyWithWarning : public USetDifficulty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WarningSID;
    
public:
    USetDifficultyWithWarning();

};

