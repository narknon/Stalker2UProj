#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMeshSubType.h"
#include "SpawnedItem.h"
#include "EditorItemContainer.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AEditorItemContainer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfigSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseItemContainerPrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MeshPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnedItem> SimpleItems;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshSubType ItemContainerType;
    
public:
    AEditorItemContainer(const FObjectInitializer& ObjectInitializer);

};

