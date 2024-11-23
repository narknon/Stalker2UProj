#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "InputManager.generated.h"

class AActor;
class ACharacter;
class UInputComponent;
class UInputMappingContext;
class UInputProcessingUnit;
class UPlayerInput;

UCLASS(Blueprintable)
class STALKER2_API UInputManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInputMappingContext> RemapMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputProcessingUnit*> InputProcessingUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputProcessingUnit*> TickableIPUs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerInput* PlayerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* InteractProgressBarFocusedActor;
    
public:
    UInputManager();

};

