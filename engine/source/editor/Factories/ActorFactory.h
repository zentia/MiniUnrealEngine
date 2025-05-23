#pragma once
#include <string>

#include "core/meta/reflection/reflection.h"
#include "CoreUObject/Templates/SubclassOf.h"
#include "CoreUObject/UObject/Object.h"

namespace Zentia
{
    class AActor;
}

REFLECTION_TYPE(UActorFactory)

CLASS(UActorFactory : public UObject)
{
    REFLECTION_BODY(UActorFactory)
public:
    META(Enable)
    std::string DisplayName;

    META(Enable)
    TSubclassOf<Zentia::AActor> NewActorClass;
};