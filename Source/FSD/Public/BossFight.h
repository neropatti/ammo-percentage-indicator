#pragma once
#include "CoreMinimal.h"
#include "BossFight.generated.h"

class UEnemyComponent;
class AActor;
class UEnemyHealthComponent;

USTRUCT(BlueprintType)
struct FBossFight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> BossActor;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UEnemyComponent> EnemyComponent;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UEnemyHealthComponent> HealthComponent;
    
    FSD_API FBossFight();
};

