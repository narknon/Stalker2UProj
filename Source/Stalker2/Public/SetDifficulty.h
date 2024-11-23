#pragma once
#include "CoreMinimal.h"
#include "StartGameAction.h"
#include "SetDifficulty.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USetDifficulty : public UStartGameAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DifficultySID;
    
public:
    USetDifficulty();

};

