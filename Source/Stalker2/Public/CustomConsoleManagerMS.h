#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "EDamageType.h"
#include "CustomConsoleManagerMS.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerMS : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerMS();

    UFUNCTION(BlueprintCallable, Exec)
    void XShowMaterial(int32 ObjUID, int32 MaterialID, int32 LODId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetCameraShakeScale(float NewScale) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetAIStayGoal(const int32 ObjUID, const FString& AnimPath) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XLaunchCustomAnimation(int32 ObjUID, const FString& AnimPath, const FString& AnimSlotName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XCommitSuicide(EDamageType DamageType) const;
    
};

