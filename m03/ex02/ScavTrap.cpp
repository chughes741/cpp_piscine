
#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  attack_damage_ = 100;
  energy_points_ = 50;
  attack_damage_ = 20;
  std::cout << "ScavTrap constructed" << std::endl;
  return;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  *this = other;
  this->attack_damage_ = 100;
  this->energy_points_ = 50;
  this->attack_damage_ = 20;
  std::cout << "ScavTrap copy constructed" << std::endl;
  return;
}

// Copy assignment overload
ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destroyed" << std::endl;
  return;
}

// attack method overload
void ScavTrap::attack(const std::string &target) {
  if (energy_points_ == 0) {
    std::cout << name_ << " doesn't have enough energy to attack!" << std::endl;
  } else {
    std::cout << "ScavTrap " << name_ << " attacks " << target << " for "
              << attack_damage_ << std::endl;
    energy_points_ -= 1;
  }
  return;
}

// guardGate method
void ScavTrap::guardGate() {
  std::cout << "ScavTrap is now guarding the gate" << std::endl;
}
