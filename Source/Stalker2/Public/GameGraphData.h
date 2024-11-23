#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GSCCustomActorValidatorInterface -FallbackName=GSCCustomActorValidatorInterface
#include "ContextualActionsGameGraphInfo.h"
#include "GameGraphContextualActions.h"
#include "GameGraphData.generated.h"

class UGameGraphRenderingComponent;

UCLASS(Blueprintable)
class STALKER2_API AGameGraphData : public AActor, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FGameGraphContextualActions> VertexContextualActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FContextualActionsGameGraphInfo> ContextualActionsVerticesInfo;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGameGraphRenderingComponent* DebugRenderingComp;
    
public:
    AGameGraphData(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

