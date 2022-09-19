#pragma once

#include "custom-types/shared/macros.hpp"
#include "Zenject/IInitializable.hpp"

DECLARE_CLASS_CODEGEN(BringBackTheParty, PartyController, Zenject::IInitializable,
    public:
        
        DECLARE_INSTANCE_METHOD(void, Initialize);
        
        DECLARE_DEFAULT_CTOR();
        DECLARE_SIMPLE_DTOR();
)
