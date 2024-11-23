#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAttachedMagazineType.h"
#include "EUpdateSource.h"
#include "AnimNotify_UpdateMagazineVisibililty.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_UpdateMagazineVisibililty : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachedMagazineType TargetAttachedMagazineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpdateSource UpdateSource;
    
    UAnimNotify_UpdateMagazineVisibililty();

};

