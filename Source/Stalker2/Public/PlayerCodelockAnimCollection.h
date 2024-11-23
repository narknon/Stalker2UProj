#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CodelockInteractionAnimations.h"
#include "PlayerCodelockAnimCollection.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UPlayerCodelockAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCodelockInteractionAnimations CodelockInteractionAnimations;
    
public:
    UPlayerCodelockAnimCollection();

};

