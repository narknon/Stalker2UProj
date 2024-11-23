#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "CameraModifier_LookAt.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class UCameraModifier_LookAt : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
public:
    UCameraModifier_LookAt();

};

