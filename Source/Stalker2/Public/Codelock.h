#pragma once
#include "CoreMinimal.h"
#include "ECodelockKeyType.h"
#include "InteractableObject.h"
#include "Codelock.generated.h"

class UCodeComponent;
class UCodelockSingleClickComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API ACodelock : public AInteractableObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCodelockSingleClickComponent* InteractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCodeComponent* CodeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CodeLockDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CodeLockZoomInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CodeLockZoomOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CodeLockForceZoomOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailDisplayTimerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideKeyMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ECodelockKeyType> KeyMap;
    
public:
    ACodelock(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputCodePassed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputCodeFailed();
    
};

