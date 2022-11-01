
#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name.append("_clap_name")), name_(name) {
  std::cout << "Diamond trap constructed" << std::endl;
  return;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) {
  *this = other;
  return;
}

// Copy assignment overload
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
DiamondTrap::~DiamondTrap() {
  std::cout << "Diamond trap destroyed" << std::endl;
  return;
}
