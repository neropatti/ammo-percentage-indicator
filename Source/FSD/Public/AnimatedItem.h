#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "UObject/NoExportTypes.h"
#include "AnimatedItem.generated.h"

class UItemCharacterAnimationSet;
class UAnimMontage;
class USkinnableComponent;
class USkeletalMeshComponent;
class UPlayerAnimInstance;

UCLASS(Abstract, Blueprintable)
class AAnimatedItem : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnableComponent* Skinnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
public:
    AAnimatedItem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveEquippedFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMuzzle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetItemMesh() const;
    
};

