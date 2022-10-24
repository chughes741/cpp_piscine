
#include "HumanB.hpp"

// Default constructor
HumanB::HumanB(std::string newname) : name_(newname) { return; }

// Default destructor
HumanB::~HumanB(void) { return; }

// myweapon_ setter
void HumanB::setWeapon(Weapon weaponname) {
  myweapon_ = &weaponname;
  return;
}

// Attack method
void HumanB::attack(void) {
  std::cout << name_ << " attacks with their " << myweapon_->getType()
            << std::endl;
  return;
}
