#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_PlaySoundDependOnMaterialContextualAction.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_PlaySoundDependOnMaterialContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactSound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TraceDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceLength;
    
    UAnimNotify_PlaySoundDependOnMaterialContextualAction();

};

