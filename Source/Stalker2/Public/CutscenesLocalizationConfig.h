#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ELocalizationLanguage.h"
#include "CutscenesLocalizationConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=BinkCutscenes)
class STALKER2_API UCutscenesLocalizationConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELocalizationLanguage, uint32> VoiceoverLanguageToTrackIndexMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizedBinkPostfix;
    
    UCutscenesLocalizationConfig();

};

