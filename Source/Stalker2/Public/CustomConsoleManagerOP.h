#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "EFaceBlockingBlendMasks.h"
#include "EStateTag.h"
#include "CustomConsoleManagerOP.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerOP : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerOP();

    UFUNCTION(Exec)
    void XNpcSetStateTag(const int32 NpcUID, const EStateTag StateTag, const bool bEnabled) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XNpcSetFaceBlockingBlendMask(const int32 NpcUID, const EFaceBlockingBlendMasks FaceBlockingMask, const float BlockingWeight) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XNpcSetFaceBlendShapeState(const int32 NpcUID, const bool bEnabled) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XNpcFreezeRagdollPose(const int32 NpcUID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XNpcArraySetFaceBlendShapeState(const int32 StartNpcUID, const int32 EndNpcUID, const bool bEnabled) const;
    
};

