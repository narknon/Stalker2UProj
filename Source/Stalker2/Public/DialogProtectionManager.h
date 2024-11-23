#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "DialogProtectionManager.generated.h"

class ADialogProtector;

UCLASS(Blueprintable)
class STALKER2_API UDialogProtectionManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADialogProtector* DialogProtector;
    
public:
    UDialogProtectionManager();

};

