
#include "Weapon.hpp"

// Default constructor
Weapon::Weapon(std::string weaponname) : type_(weaponname) { return; }

// Copy constructor
Weapon::Weapon(const Weapon &other) {
  *this = other;
  return;
}

// Default destructor
Weapon::~Weapon(void) { return; }

// Copy operator overload
Weapon &Weapon::operator=(const Weapon &rhs) {
  this->type_ = rhs.getType();
  return *this;
}

// Returns Weapon type
const std::string &Weapon::getType(void) const { return type_; }

// type_ setter
void Weapon::setType(std::string newtype) {
  type_ = newtype;
  return;
}
