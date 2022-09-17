

#include "Weapon.hpp"

#include <string>


// Returns Weapon type
const std::string& Weapon::getType( void ) {
	return type;
}


// Set Weapons type
void Weapon::setType( std::string newtype ) {
	
	type = newtype;
	
	return;
}
