#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeleportPoint.generated.h"

class UArrowComponent;
class UBillboardComponent;

UCLASS(Blueprintable, MinimalAPI)
class ATeleportPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    ATeleportPoint(const FObjectInitializer& ObjectInitializer);

};

