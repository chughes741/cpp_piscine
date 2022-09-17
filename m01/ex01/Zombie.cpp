

#include "Zombie.hpp"

#include <iostream>


Zombie::Zombie( void ) : _name("Julie") {
	return;
}

Zombie::Zombie( std::string new_name ) : _name(new_name) {
	return;
}

Zombie::~Zombie ( void ) {
	return;
}

void Zombie::setName( std::string name) {
	_name = name;

	return;
}

std::string Zombie::getName( void ) {
	return _name;
}

void Zombie::announce( void ) {

	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return;
}
