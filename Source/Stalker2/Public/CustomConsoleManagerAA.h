#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerAA.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerAA : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAA();

    UFUNCTION(BlueprintCallable, Exec)
    void XTryReceiveSignal(const FString& Guid);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleArtifactSpawnerDebugInfo() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XToggleAkVisualization(const FString& Types);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTestJournalQuestRewardCategory(const FString& QuestSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTeleportNPCToSpawn(const FString& NPCSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XTeleportNPCToPlayer(const FString& NPCSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStartQuestNodeBySID(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStartQuestNode(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStartQuestBySID(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XStartQuest(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSkipToQuestNode(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSkipInfotopicRefreshCooldown() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSimulateWaitForProfileSettingUp(const float SetupDuration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowSpawnDebugInfo(const bool Show) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowQuestTriggers(const bool bShow) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowHubOwner(const FString& HubSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowCurrentLocation() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowCurrentImportantChoices() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetWeatherTime(const int32 Hour, const int32 Minute, const int32 Second) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetTimeSpeed(float Speed) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetTextLanguage(const FString& LocaleString) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetSearchpointDebugState(bool bState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetRelationsInRadius(float Radius, int32 RelationValue) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetRandomNodeDefinedPinBySID(const FString& SID, int32 PinNumber) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetRandomNodeDefinedPin(const FString& ID, int32 PinNumber) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetGameTime(const int32 Hour, const int32 Minute, const int32 Second) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetDifficultySID(const FString& DifficultySID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetAudioLanguage(const FString& LocaleString) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XSetAkVisualizationRadius(float NewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XRestartCurrentDialog() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XResetRandomNodeBySID(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XResetRandomNode(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XResetQuestBySID(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XPrintGlobalVariable(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XPlayDialogLine(const int32 SpeakerUID, const FString& DialogPrototypeSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XPlayDialogFromPool(const FString& DialogEventTypeName, int32 NPCUIDValue1, int32 NPCUIDValue2) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XPlayCommentFromPool(const FString& DialogEventTypeName, int32 NPCUIDValue) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XListMapMarkers(const FString& MarkerType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XKillNPCInRadius(float Radius, const int32 MinimalReputationToKill, int32 MaxReputationToKill) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XFindNonEndingDialogs() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XExcludeQuestNodeBySID(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XExcludeQuestNode(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XExcludeQuestBySID(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XExcludeQuest(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XEndQuestNodeBySID(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XEndQuestNode(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XEndQuestBySID(const FString& SID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XEndQuest(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDiscoverMarker(const FString& MarkerSID) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDespawnNPCsAtRadius(float Radius) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDespawnDeadNPCsAtRadius(float Radius) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDespawnAliveNPCsAtRadius(float Radius) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XDebugAddHelloDialogsToQueue(const int32 TargetUID, const int32 DialogsCount) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XClearDialogQueue() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XCheckGamedata() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAddMoneyToPlayer(int32 Value) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XAddAllNotes() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWaitForProfileSimulationFinished() const;
    
};

