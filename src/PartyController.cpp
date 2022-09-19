// OurClass.cpp
#include "PartyController.hpp"
#include "UnityEngine/GameObject.hpp"

// Necessary
DEFINE_TYPE(BringBackTheParty, PartyController);

void BringBackTheParty::PartyController::Initialize() {
  UnityEngine::GameObject* party = UnityEngine::GameObject::Find(il2cpp_utils::newcsstr("AnniversaryWrapper"));
  
  party->SetActive(true);

}
