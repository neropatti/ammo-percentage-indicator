#pragma once
#include "CoreMinimal.h"
#include "CSGBuilderBase.h"
#include "CSGBuilder.generated.h"

class UCSGPreviewScene;
class UTerrainMaterialCore;
class UCSGGroupComponent;
class UCSGBase;
class UBakeConfig;

UCLASS(Blueprintable)
class FSDENGINE_API ACSGBuilder : public ACSGBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSGGroupComponent* CSGRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTerrainMaterialCore*> UsedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCSGBase* CurrentRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCSGBase* CurrentPreviewRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBakeConfig* CurrentPreviewConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCSGPreviewScene* PreviewScene;
    
    ACSGBuilder();
};

