#pragma once
#include "CoreMinimal.h"
#include "GuidActorComponent.h"
#include "SaveableComponent.h"
#include "CodeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UCodeComponent : public UGuidActorComponent, public ISaveableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CorrectCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumCodeLength;
    
public:
    UCodeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetCode();
    

    // Fix for true pure virtual functions not being implemented
};

