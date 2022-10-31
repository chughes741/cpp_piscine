
#include "HumanA.hpp"

// Default constructor
HumanA::HumanA(std::string newname, Weapon &newweapon)
    : name_(newname), myweapon_(newweapon) {
  return;
}

// Default destructor
HumanA::~HumanA() { return; }

// Copy assignment overload
HumanA &HumanA::operator=(const HumanA &rhs) {
  this->name_ = rhs.getName();
  this->myweapon_ = rhs.getWeapon();
  return *this;
}

// name_ getter
const std::string &HumanA::getName() const { return name_; }

// myweapon_ getter
const Weapon &HumanA::getWeapon() const { return myweapon_; }

// HumanA attack method
void HumanA::attack() {
  std::cout << name_ << " attacks with their " << myweapon_.getType()
            << std::endl;
  return;
}
