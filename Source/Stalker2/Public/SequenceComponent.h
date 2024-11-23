#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SequenceComponent.generated.h"

class UPreBlendCinematicComponent;

UCLASS(Blueprintable)
class STALKER2_API USequenceComponent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreBlendCinematicComponent* PreBlendCinematicComponent;
    
public:
    USequenceComponent();

private:
    UFUNCTION(BlueprintCallable)
    void OnSequenceStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
};

