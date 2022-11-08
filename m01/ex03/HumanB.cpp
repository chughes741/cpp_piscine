
#include "HumanB.hpp"

// Default constructor
HumanB::HumanB(std::string newname) : name_(newname) { return; }

// Default destructor
HumanB::~HumanB(void) { return; }

// Copy assignment overload
HumanB &HumanB::operator=(const HumanB &rhs) {
  this->name_ = rhs.getName();
  this->myweapon_ = rhs.getWeapon();
  return *this;
}

// name_ getter
const std::string &HumanB::getName() const { return name_; }

// name_ setter
void HumanB::setName(std::string name) {
  name_ = name;
  return;
}

// myweapon_ getter
Weapon *HumanB::getWeapon() const { return myweapon_; }

// myweapon_ setter
void HumanB::setWeapon(Weapon &weaponname) {
  myweapon_ = &weaponname;
  return;
}

// Attack method
void HumanB::attack(void) {
  std::cout << name_ << " attacks with their " << myweapon_->getType()
            << std::endl;
  return;
}
