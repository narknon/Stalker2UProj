#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAttackActionType.h"
#include "EShutterState.h"
#include "EWeaponAction.h"
#include "AnimNotify_WeaponAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_WeaponAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponAction WeaponAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTwinMagazineShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShutterState ForcedIdle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackActionType AttachIdleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowBulletMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnlocked;
    
    UAnimNotify_WeaponAction();

};

