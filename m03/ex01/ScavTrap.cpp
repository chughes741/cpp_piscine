
#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap constructed" << std::endl;
	return;
}

// Default destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destroyed" << std::endl;
	return;
}

// guardGate method
void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now guarding the gate" << std::endl;
}