#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerWeaponInertiaData.h"
#include "AnimPlayerWeaponSwingData.h"
#include "AnimHandItemData.generated.h"

class UInteractionComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHandItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasItemInHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEmptyHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ItemSkeletal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* ItemInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsesLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsesRightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerWeaponSwingData SwingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerWeaponInertiaData InertiaData;
    
    FAnimHandItemData();
};

