

#include "HumanB.hpp"

#include <string>
#include <iostream>

#include "Weapon.hpp"


HumanB::HumanB( std::string newname ) {

	name = newname;

	return;
}


void HumanB::attack( void ) {
	std::cout	<< name << " attacks with their " 
				<< myweapon.getType() << std::endl;
	return;
}
