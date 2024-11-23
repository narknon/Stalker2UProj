#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAnimationAimState.h"
#include "EShutterState.h"
#include "EWeaponCustomAdditionalIdle.h"
#include "EWeaponIdleState.h"
#include "EWeaponIdleType.h"
#include "AnimNotify_ChangeWeaponIdle.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_ChangeWeaponIdle : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponIdleState WeaponIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShutterState NewShutterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewJamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponIdleType NewUnderbarrelState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationAimState NewAimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponCustomAdditionalIdle AdditionalType;
    
    UAnimNotify_ChangeWeaponIdle();

};

