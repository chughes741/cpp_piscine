
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
  ClapTrap bob = ClapTrap("Bob"), cole = ClapTrap("Cole");

  bob.attack("Cole");
  bob.beRepaired(1);
  bob.beRepaired(1);
  cole.takeDamage(11);

  ScavTrap mike = ScavTrap("mike");
  mike.attack("Bob");
  mike.takeDamage(3);
  mike.guardGate();
  mike.beRepaired(1);

	FragTrap dan = FragTrap("dan");
	dan.attack("Bob");
  dan.takeDamage(3);
	dan.beRepaired(4);
	dan.highFiveGuys();

  return 0;
}
