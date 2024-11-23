#pragma once
#include "CoreMinimal.h"
#include "OnLoadImageDelegateDelegate.generated.h"

class UTexture2DDynamic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoadImageDelegate, UTexture2DDynamic*, Texture);

