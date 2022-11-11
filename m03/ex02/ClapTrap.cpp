
#include "ClapTrap.hpp"

// Named constructor
ClapTrap::ClapTrap(std::string name)
    : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {
  std::cout << "ClapTrap constructed" << std::endl;
  return;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
  std::cout << "ClapTrap copy constructed" << std::endl;
  *this = other;
  return;
}

// Copy assignment overload
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap destroyed" << std::endl;
  return;
}

// attack method
void ClapTrap::attack(const std::string &target) {
  if (energy_points_ == 0) {
    std::cout << name_ << " doesn't have enough energy to attack!" << std::endl;
  } else {
    std::cout << name_ << " attacks " << target << " for " << attack_damage_
              << std::endl;
    energy_points_ -= 1;
  }
  return;
}

// takeDamage method
void ClapTrap::takeDamage(unsigned int amount) {
  if (amount > hit_points_) amount = hit_points_;
  hit_points_ -= amount;
  std::cout << name_ << " took " << amount << " damage!" << std::endl;
  return;
}

// beRepaired method
void ClapTrap::beRepaired(unsigned int amount) {
  if (energy_points_ == 0) {
    std::cout << name_ << " doesn't have enough energy to repair itself!"
              << std::endl;
  } else {
    std::cout << name_ << " repaired itself for " << amount << " hit points"
              << std::endl;
    hit_points_ += amount;
    energy_points_ -= 1;
  }
  return;
}
