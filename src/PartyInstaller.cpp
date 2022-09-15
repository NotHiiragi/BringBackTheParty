#include "PartyInstaller.hpp"
#include "Zenject/ConcreteIdBinderGeneric_1.hpp"
#include "Zenject/DiContainer.hpp"
#include "Zenject/FromBinderNonGeneric.hpp"

#include "lapiz/shared/utilities/ZenjectExtensions.hpp"

DEFINE_TYPE(BringBackTheParty, PartyInstaller);

void BringBackThePartyPartyInstaller::InstallBindings()
{
    auto container = get_Container();

    Lapiz::Zenject::ZenjectExtensions::FromNewComponentOnNewGameObject(container->BindInterfacesAndSelfTo<BringBackThePartyPartyInstaller::PartyController*>())->AsSingle(),
}
