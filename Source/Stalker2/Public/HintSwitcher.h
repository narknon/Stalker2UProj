#pragma once
#include "CoreMinimal.h"
#include "HintBase.h"
#include "HintSwitcher.generated.h"

class UButton;
class UHintKey;
class UPlatformSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UHintSwitcher : public UHintBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlatformSwitcher* HintSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintKey* HintPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintKey* HintConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* HintButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHintKey*> HintKeys;
    
public:
    UHintSwitcher();

};

