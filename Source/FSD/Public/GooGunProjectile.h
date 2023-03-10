#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Projectile.h"
#include "GooGunProjectile.generated.h"

class AGooGunPuddle;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AGooGunProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PuddleLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FragmentCount;
    
public:
    AGooGunProjectile();
protected:
    UFUNCTION(BlueprintCallable)
    AGooGunPuddle* SpawnPuddle(FTransform Transform, TSubclassOf<AGooGunPuddle> PuddleClass);
    
    UFUNCTION(BlueprintCallable)
    void DealSocketArmorDamage(AActor* Actor, UPrimitiveComponent* Target);
    
};

