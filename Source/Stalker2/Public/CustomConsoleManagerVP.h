#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "ELookAtOwnerState.h"
#include "ERotationPartType.h"
#include "CustomConsoleManagerVP.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerVP : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerVP();

    UFUNCTION(BlueprintCallable, Exec)
    void XWoundNpcByUID(const int32 NpcUID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShootAttach() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XResurrectNPCAsZombie(const int32 NpcUID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XReloadAttachTactical() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XReloadAttach() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XNpcSetLookAtOwnerState(const int32 NpcUID, ELookAtOwnerState LookAtOwnerState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XNpcLookAtNPC(const int32 NpcUID, const int32 TargetNpcUID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XNpcLookAt(const int32 NpcUID, const float X, const float Y, const float Z) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XLimitNpcBodyPartRotation(const int32 NpcUID, const float LimitAngle, ERotationPartType RotationPartType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XLaunchFacialAnimation(const int32 ObjUID, const FString& AnimPath) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XKnockDownNpcByAnotherNpc(const int32 NpcUID, const int32 AttackerNpcUID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XKnockDownNpc(const int32 NpcUID) const;
    
};

