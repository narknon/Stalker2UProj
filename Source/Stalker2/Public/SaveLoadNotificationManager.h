#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "SaveLoadNotificationManager.generated.h"

class USaveLoadNotificationView;

UCLASS(Blueprintable)
class STALKER2_API USaveLoadNotificationManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USaveLoadNotificationView* SaveLoadNotificationView;
    
public:
    USaveLoadNotificationManager();

};

