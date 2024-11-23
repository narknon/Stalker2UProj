#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalMapPreview.h"
#include "OnPreviewExternalUpdatesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnPreviewExternalUpdatesDelegate, FModioErrorCode, ErrorCode, FModioOptionalMapPreview, ModioPreviewMap);

