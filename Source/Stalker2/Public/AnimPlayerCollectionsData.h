#pragma once
#include "CoreMinimal.h"
#include "ESubgraphBlendTypes.h"
#include "PlayerExternalAnimations.h"
#include "AnimPlayerCollectionsData.generated.h"

class UInteractableAnimCollection;
class UItemAnimCollection;
class UPlayerAnimCollection;
class UPlayerDefaultAnimCollection;
class UPlayerDetectorAnimCollection;
class UPlayerFirearmAnimCollection;
class UPlayerKnifeAnimCollection;
class UPlayerThrowableItemAnimCollection;
class UWeaponAttachAnimCollection;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerCollectionsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDefaultAnimCollection* DefaultAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDefaultAnimCollection* DragDeadBodyAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerAnimCollection* AnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerFirearmAnimCollection* FirearmAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerThrowableItemAnimCollection* ThrowableAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerKnifeAnimCollection* KnifeAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemAnimCollection* ItemAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractableAnimCollection* ItemInteractableAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponAttachAnimCollection* AttachAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDetectorAnimCollection* DetectorAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerExternalAnimations ExternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponSubgraphToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponSubgraphBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdditionalSubgraphToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalSubgraphBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESubgraphBlendTypes, float> SubgraphDefaultBlendTime;
    
    FAnimPlayerCollectionsData();
};

