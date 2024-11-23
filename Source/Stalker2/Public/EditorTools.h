#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GSCCustomActorValidatorInterface -FallbackName=GSCCustomActorValidatorInterface
#include "EZeroBoundsFilter.h"
#include "EditorTools.generated.h"

class UWorld;

UCLASS(Blueprintable)
class STALKER2_API AEditorTools : public AActor, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmptyGroupsOutputToMessageLog;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmptyGroupsOutputToConsole;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveEmptyGroupActors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZeroBoundsFilter ZeroBoundsFilter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZeroBoundsOutputToConsole;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZeroBoundsOutputToMessageLog;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBigClustersOutputToConsole;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBigClustersOutputToMessageLog;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBigClustersExcludeEmptyGroupActors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GridNameForDebug;
    
public:
    AEditorTools(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void XVerifyAllActorsForBrokenReference();
    
    UFUNCTION(BlueprintCallable)
    void XRemoveRestoredLabelFromActors() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateVoiceSounds();
    
    UFUNCTION(BlueprintCallable)
    void RemoveEditorContainers();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsGameWorld(UWorld* GameWorld);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorInGameWorld(AActor* ActorToCheck);
    
    UFUNCTION(BlueprintCallable)
    static float GetSkyLightUpdateDeltaTime();
    
private:
    UFUNCTION(BlueprintCallable)
    void FixAttachMeshes();
    
    UFUNCTION(BlueprintCallable)
    void CheckAllPrototypes();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNotesToTeleportPoints();
    

    // Fix for true pure virtual functions not being implemented
};

