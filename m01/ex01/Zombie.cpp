

#include "Zombie.hpp"

#include <iostream>


Zombie::Zombie( std::string new_name ) {
	name = new_name;

	return;
}


void Zombie::announce( void ) {

	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return;
}
