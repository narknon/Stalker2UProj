#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EModioVirusScanStatus.h"
#include "EModioVirusStatus.h"
#include "ModioFileMetadataID.h"
#include "ModioModID.h"
#include "ModioFileMetadata.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioFileMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioFileMetadataID MetadataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModID ModId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DateAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioVirusScanStatus CurrentVirusScanStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioVirusStatus CurrentVirusStatus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Filesize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Changelog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MetadataBlob;
    
    FModioFileMetadata();
};

