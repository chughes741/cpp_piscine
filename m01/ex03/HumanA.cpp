

#include "HumanA.hpp"

HumanA::HumanA(std::string newname, Weapon &newweapon)
    : name_(newname), myweapon_(newweapon) {
  return;
}

HumanA::~HumanA(void) { return; }

void HumanA::attack(void) {
  std::cout << name << " attacks with their " << myweapon.getType()
            << std::endl;
  return;
}
