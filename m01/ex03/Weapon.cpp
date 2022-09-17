

#include "Weapon.hpp"

#include <string>


Weapon::Weapon( std::string weaponname ) {

	type = weaponname;

	return;
}


// Returns Weapon type
const std::string& Weapon::getType( void ) {
	//TODO Need to check how to do const ref return
	return type;
}


// Set Weapons type
void Weapon::setType( std::string newtype ) {
	
	type = newtype;
	
	return;
}
