#pragma once
#include "CoreMinimal.h"
#include "SignalReceiverComponentReceiveSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FSignalReceiverComponentReceiveSignatureUObject*, EnterPropertyName, UObject*, DataObject);

