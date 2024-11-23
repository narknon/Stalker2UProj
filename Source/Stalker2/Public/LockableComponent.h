#pragma once
#include "CoreMinimal.h"
#include "LockStruct.h"
#include "SingleClickComponent.h"
#include "LockableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULockableComponent : public USingleClickComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayAlternativeText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockStruct LockStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
public:
    ULockableComponent(const FObjectInitializer& ObjectInitializer);

};

