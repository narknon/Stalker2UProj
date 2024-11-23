#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "PopupManager.generated.h"

class UPopupView;

UCLASS(Blueprintable)
class STALKER2_API UPopupManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPopupView* PopupView;
    
public:
    UPopupManager();

};

