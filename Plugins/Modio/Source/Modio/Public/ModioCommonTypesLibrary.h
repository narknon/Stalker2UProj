#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioEnvironment.h"
#include "EModioPortal.h"
#include "ModioApiKey.h"
#include "ModioAuthenticationParams.h"
#include "ModioEmailAddress.h"
#include "ModioEmailAuthCode.h"
#include "ModioEntitlementParams.h"
#include "ModioFileMetadataID.h"
#include "ModioGameID.h"
#include "ModioInitializeOptions.h"
#include "ModioModID.h"
#include "ModioUserID.h"
#include "ModioCommonTypesLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioCommonTypesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioCommonTypesLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioInitializeOptions SetSessionIdentifier(const FModioInitializeOptions& Options, const FString& SessionIdentifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioInitializeOptions SetPortal(const FModioInitializeOptions& Options, EModioPortal PortalToUse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqualTo(const FModioModID& A, const FModioModID& B);
    
    UFUNCTION(BlueprintPure)
    static FModioInitializeOptions MakeInitializeOptions(int64 GameId, const FString& ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse);
    
    UFUNCTION(BlueprintPure)
    static FModioGameID MakeGameId(int64 GameId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioEntitlementParams MakeEntitlementParams(const TMap<FString, FString>& ExtendedParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioAuthenticationParams MakeAuthParams(const FString& AuthToken, const FString& EmailAddress, const bool bHasAcceptedTOS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioApiKey MakeApiKey(const FString& ApiKey);
    
    UFUNCTION(BlueprintPure)
    static int64 GetRawValueFromModID(const FModioModID& In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualTo(const FModioModID& A, const FModioModID& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_UserIDToString(FModioUserID userId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioEmailAuthCode Conv_StringToEmailAuthCode(const FString& AuthCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioEmailAddress Conv_StringToEmailAddress(const FString& Email);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_ModIDToString(FModioModID ModId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_GameIDToString(FModioGameID GameId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_FileMetadataIDToString(FModioFileMetadataID FileMetadataID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_EmailAuthCodeToString(FModioEmailAuthCode EmailAuthCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_EmailAddressToString(FModioEmailAddress EmailAddress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_ApiKeyToString(FModioApiKey ApiKey);
    
};

