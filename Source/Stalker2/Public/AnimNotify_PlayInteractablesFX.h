#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EInteractFXType.h"
#include "AnimNotify_PlayInteractablesFX.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_PlayInteractablesFX : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomBoneName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractFXType InteractFXType;
    
    UAnimNotify_PlayInteractablesFX();

    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAvailableBones() const;
    
};

