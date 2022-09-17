

#include "Zombie.hpp"

#include <iostream>
#include <string>


int main() {

	randomChump("Chris");

	Zombie* jenny = newZombie("Jenny");
	jenny->announce();

	delete jenny;
	return 0;
}
