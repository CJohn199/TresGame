#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "Tres_LocomotionDefinition_SnowChaseParam.h"
#include "Tres_e_ex082_LocomotionDefinition_SnowChase.generated.h"

UCLASS(Abstract, Blueprintable)
class UTres_e_ex082_LocomotionDefinition_SnowChase : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTres_LocomotionDefinition_SnowChaseParam m_SnowChaseParam;
    
public:
    UTres_e_ex082_LocomotionDefinition_SnowChase();
};

