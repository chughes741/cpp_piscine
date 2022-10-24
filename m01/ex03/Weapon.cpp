

#include "Weapon.hpp"

#include <string>

// Default constructor
Weapon::Weapon(std::string weaponname) : type_(weaponname) { return; }

// Default destructor
Weapon::~Weapon(void) { return; }

// Returns Weapon type
const std::string& Weapon::getType(void) { return type_; }

// type_ setter
void Weapon::setType(std::string newtype) {
  type_ = newtype;
  return;
}
