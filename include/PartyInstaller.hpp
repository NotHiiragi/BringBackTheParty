#pragma once

#include "Zenject/Installer.hpp"
#include "custom-types/shared/macros.hpp"

DECLARE_CLASS_CODEGEN(BringBackTheParty, PartyInstaller, ::Zenject::Installer,
    public:
                      
      DECLARE_OVERRIDE_METHOD(void, InstallBindings, il2cpp_utils::il2cpp_type_check::MetadataGetter<&::Zenject::Installer::InstallBindings>::get());
      DECLARE_DEFAULT_CTOR();
)
