
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap bob = ClapTrap("Bob"), cole = ClapTrap("Cole");
	ScavTrap mike = ScavTrap("mike");

	bob.attack("Cole");
	bob.beRepaired(1);
	bob.beRepaired(1);
	cole.takeDamage(11);
	mike.attack("Bob");
	mike.takeDamage(3);
	mike.guardGate();
	mike.beRepaired(1);

	return 0;
}
