#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "InjectorAnimations.h"
#include "AnimInstancePlayerInjector.generated.h"

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstancePlayerInjector : public UAnimInstanceBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInjectorAnimations InjectorAnimations;
    
public:
    UAnimInstancePlayerInjector();

};

