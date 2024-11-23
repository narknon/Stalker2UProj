#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "TerraVolume.generated.h"

class ALandscapeProxy;

UCLASS(Blueprintable)
class PREFABASSET_API ATerraVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> CapturedHData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, uint16> AppliedAlignHMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, uint16> AppliedCaptureDeltaHMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 CurrentBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint CapturedSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CapturedBoxExtend0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CapturedBoxExtend1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CapturedBoxExtend2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CapturedBoxExtend3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipRestoreOnDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALandscapeProxy* CachedLandscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepTerrainOnDestruction;
    
public:
    ATerraVolume(const FObjectInitializer& ObjectInitializer);

};

