#pragma once
#include "CoreMinimal.h"
#include "GSCNavModifierVolume.h"
#include "Templates/SubclassOf.h"
#include "ScriptedNavModifierVolume.generated.h"

class UNavArea_Scripted;

UCLASS(Blueprintable)
class STALKER2_API AScriptedNavModifierVolume : public AGSCNavModifierVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea_Scripted> TargetNavArea;
    
public:
    AScriptedNavModifierVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

