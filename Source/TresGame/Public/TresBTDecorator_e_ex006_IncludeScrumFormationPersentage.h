#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_e_ex006_IncludeScrumFormationPersentage.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_e_ex006_IncludeScrumFormationPersentage : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Value;
    
    UTresBTDecorator_e_ex006_IncludeScrumFormationPersentage();
};

