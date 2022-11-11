
#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  attack_damage_ = 100;
  energy_points_ = 100;
  attack_damage_ = 30;
  std::cout << "FragTrap constructed" << std::endl;
  return;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "FragTrap copy constructed" << std::endl;
  *this = other;
  return;
}

// Copy assignment overload
FragTrap &FragTrap::operator=(const FragTrap &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
FragTrap::~FragTrap() {
  std::cout << "FragTrap destroyed" << std::endl;
  return;
}

// guardGate method
void FragTrap::highFiveGuys() {
  std::cout << "FragTrap gave a high five" << std::endl;
}
