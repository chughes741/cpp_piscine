
#include "ClapTrap.hpp"

int main() {
	ClapTrap bob = ClapTrap("Bob"), cole = ClapTrap("Cole");

	bob.attack("Cole");
	bob.beRepaired(1);
	bob.beRepaired(1);
	cole.takeDamage(11);

	return 0;
}
