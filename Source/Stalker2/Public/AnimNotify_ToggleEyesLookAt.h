#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ECutsceneEyesIdleProfile.h"
#include "AnimNotify_ToggleEyesLookAt.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_ToggleEyesLookAt : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldChangeEyesIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECutsceneEyesIdleProfile NewEyesIdleProfile;
    
public:
    UAnimNotify_ToggleEyesLookAt();

};

