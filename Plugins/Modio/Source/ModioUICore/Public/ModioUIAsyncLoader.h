#pragma once
#include "CoreMinimal.h"
#include "Components/NamedSlotInterface.h"
#include "Components/Widget.h"
#include "EModioUIAsyncOperationWidgetState.h"
#include "ModioUIAsyncHandlerWidget.h"
#include "ModioUIAsyncLoader.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioUIAsyncLoader : public UWidget, public IModioUIAsyncHandlerWidget, public INamedSlotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioUIAsyncOperationWidgetState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UWidget*> NamedWidgets;
    
public:
    UModioUIAsyncLoader();

    UFUNCTION(BlueprintCallable)
    void Retry();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRetryRequested();
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleAsyncOperationStateChange(EModioUIAsyncOperationWidgetState NewState);
    

    // Fix for true pure virtual functions not being implemented
};

