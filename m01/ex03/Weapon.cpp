
#include "Weapon.hpp"

// Default constructor
Weapon::Weapon(std::string weaponname) : type_(weaponname) {
  std::cout << "A new " << type_ << " has been created" << std::endl;
  return;
}

// Copy constructor
Weapon::Weapon(const Weapon &other) {
  *this = other;
  return;
}

// Copy operator overload
Weapon &Weapon::operator=(const Weapon &rhs) {
  this->type_ = rhs.getType();
  return *this;
}

// Default destructor
Weapon::~Weapon(void) {
  std::cout << "A " << type_ << " has been destroyed" << std::endl;
  return;
}

// Returns Weapon type
const std::string &Weapon::getType(void) const { return type_; }

// type_ setter
void Weapon::setType(std::string newtype) {
  type_ = newtype;
  return;
}
