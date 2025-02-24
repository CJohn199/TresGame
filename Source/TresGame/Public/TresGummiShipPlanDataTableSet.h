#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGummiShipPlanDataTableSet.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTresGummiShipPlanDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> m_pGummiPlanData;
    
public:
    UTresGummiShipPlanDataTableSet();
};

