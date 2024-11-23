#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerMY.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerMY : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerMY();

    UFUNCTION(BlueprintCallable, Exec)
    void XSimulatePhysicsOnBoneForObj(int32 ObjUID, const FString& BoneName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetXRayMode(bool bEnabled) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetDebugMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void XPossessToCharacterByUID(int32 UID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XEnsureAllRelevantCollisionStreamed();
    
};

