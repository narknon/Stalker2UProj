#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "CustomButton.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomIntParam1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomIntParam2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomFloatParam3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomFloatParam4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatTag;
    
    UCustomButton();

    UFUNCTION(BlueprintCallable)
    void OnPress();
    
    UFUNCTION(BlueprintCallable)
    void OnClick();
    
};

