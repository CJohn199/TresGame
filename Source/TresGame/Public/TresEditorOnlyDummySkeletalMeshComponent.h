#pragma once
#include "CoreMinimal.h"
#include "TresSkeletalMeshComponent.h"
#include "TresEditorOnlyDummySkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresEditorOnlyDummySkeletalMeshComponent : public UTresSkeletalMeshComponent {
    GENERATED_BODY()
public:
    UTresEditorOnlyDummySkeletalMeshComponent();
};

