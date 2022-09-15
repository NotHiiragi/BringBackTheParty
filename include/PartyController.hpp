#pragma once

#include "custom-types/shared/macros.hpp"
#include "UnityEngine/IInitializable.hpp"

DECLARE_CLASS_CODEGEN(BringBackTheParty, PartyController, UnityEngine::IInitializable,
    public:
        
        DECLARE_INSTANCE_METHOD(void, Initialize);
        
        DECLARE_CTOR(ctor);
        DECLARE_SIMPLE_DTOR();
)
