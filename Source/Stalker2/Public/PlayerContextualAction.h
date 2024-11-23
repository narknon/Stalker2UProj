#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerContextualAction.generated.h"

class USingleClickComponent;

UCLASS(Blueprintable)
class STALKER2_API APlayerContextualAction : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USingleClickComponent* SingleClickComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraYawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraYawMax;
    
public:
    APlayerContextualAction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ActionStart();
    
    UFUNCTION(BlueprintCallable)
    void ActionEnd();
    
};

