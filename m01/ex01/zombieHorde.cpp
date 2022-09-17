

#include "Zombie.hpp"

#include <string>


// Generates an array of Zombies
Zombie*    zombieHorde( int N, std::string name ) {

	Zombie* newhorde = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		newhorde[i] = Zombie(name);
	}

	return;
}
