#pragma once
#include "CoreMinimal.h"
#include "AIEntityCollection.h"
#include "AITickComponentCollection.h"
#include "AgentCollection.h"
#include "AgentModelCollection.h"
#include "AkComponentCollection.h"
#include "AkLateReverbCollection.h"
#include "AkRoomCollection.h"
#include "AkSurfaceReflectorSetCollection.h"
#include "AnomalyCollection.h"
#include "AnomalyModelCollection.h"
#include "ArtifactCollection.h"
#include "BaseTickableManager.h"
#include "ContextualActionModelCollection.h"
#include "DestructibleModelCollection.h"
#include "DestructibleObjectCollection.h"
#include "HeadFlashlightComponentCollection.h"
#include "ItemContainerModelCollection.h"
#include "QuestNodeCollection.h"
#include "WetnessComponentCollection.h"
#include "TickAggregationManager.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UTickAggregationManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAgentCollection AgentsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIEntityCollection AIEntityCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FArtifactCollection ArtifactsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnomalyCollection AnomaliesCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAITickComponentCollection AITickComponentsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDestructibleObjectCollection DestructibleCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWetnessComponentCollection WetnessComponentCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHeadFlashlightComponentCollection HeadFlashlightComponentCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemContainerModelCollection ItemContainersCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAkRoomCollection AkRoomComponentsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAkComponentCollection AkComponentsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAkLateReverbCollection AkLateReverbComponentsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAkSurfaceReflectorSetCollection AkSurfaceReflectorSetsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAgentModelCollection AgentModelCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnomalyModelCollection AnomalyModelCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDestructibleModelCollection DestructibleModelCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FContextualActionModelCollection ContextualActionModelCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuestNodeCollection QuestNodeCollection;
    
public:
    UTickAggregationManager();

};

