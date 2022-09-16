#include "PartyInstaller.hpp"
#include "PartyController.hpp"
#include "Zenject/ConcreteIdBinderGeneric_1.hpp"
#include "Zenject/DiContainer.hpp"
#include "Zenject/FromBinderNonGeneric.hpp"

DEFINE_TYPE(BringBackTheParty, PartyInstaller);

void BringBackTheParty::PartyInstaller::InstallBindings()
{
    auto container = get_Container();

    container->BindInterfacesAndSelfTo<BringBackTheParty::PartyController*>()->AsSingle();
}
