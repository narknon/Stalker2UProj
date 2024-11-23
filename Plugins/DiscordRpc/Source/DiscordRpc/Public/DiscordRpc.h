#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiscordConnectedDelegate.h"
#include "DiscordDisconnectedDelegate.h"
#include "DiscordErroredDelegate.h"
#include "DiscordJoinDelegate.h"
#include "DiscordJoinRequestDelegate.h"
#include "DiscordRichPresence.h"
#include "DiscordSpectateDelegate.h"
#include "DiscordRpc.generated.h"

UCLASS(Blueprintable)
class DISCORDRPC_API UDiscordRpc : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordConnected OnConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordDisconnected OnDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordErrored OnErrored;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordJoin OnJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordSpectate OnSpectate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordJoinRequest OnJoinRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordRichPresence RichPresence;
    
    UDiscordRpc();

    UFUNCTION(BlueprintCallable)
    void UpdatePresence();
    
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable)
    void RunCallbacks();
    
    UFUNCTION(BlueprintCallable)
    void Respond(const FString& userId, int32 Reply);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FString& applicationId, bool autoRegister, const FString& optionalSteamId);
    
    UFUNCTION(BlueprintCallable)
    void ClearPresence();
    
};

