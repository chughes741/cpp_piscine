

#include "Weapon.hpp"

#include <string>


Weapon::Weapon( std::string weaponname ) {

	type = weaponname;

	return;
}


// Returns Weapon type
const std::string& Weapon::getType( void ) {
	
	return type;
}

Weapon::~Weapon( void ) {
	return;
}

// Set Weapons type
void Weapon::setType( std::string newtype ) {
	
	type = newtype;
	
	return;
}
