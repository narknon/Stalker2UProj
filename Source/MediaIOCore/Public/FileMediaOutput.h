#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ImageWriteBlueprintLibrary.h"
#include "EFileMediaOutputPixelFormat.h"
#include "MediaOutput.h"
#include "FileMediaOutput.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MEDIAIOCORE_API UFileMediaOutput : public UMediaOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageWriteOptions WriteOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDesiredSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint DesiredSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePixelFormat;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFileMediaOutputPixelFormat DesiredPixelFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertAlpha;
    
    UFileMediaOutput();

};

