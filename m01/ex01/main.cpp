

#include "Zombie.hpp"

#include <iostream>
#include <string>


int main() {
	Zombie* horde = zombieHorde(3, "Zombae");

	for (int i = 0; i < 3; ++i) {
		horde[i].announce();
	}
	return 0;
}