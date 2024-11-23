#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_LaunchVoiceOver.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_LaunchVoiceOver : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceOverSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuest;
    
public:
    UAnimNotify_LaunchVoiceOver();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetVoiceoverSIDOptions() const;
    
};

