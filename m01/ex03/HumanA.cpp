

#include "HumanA.hpp"

#include <string>
#include <iostream>

#include "Weapon.hpp"


HumanA::HumanA( std::string newname, Weapon newweapon ) {

	myweapon = newweapon;
	name = newname;

	return;
}


void HumanA::attack( void ) {
	std::cout	<< name << " attacks with their " 
				<< myweapon.getType() << std::endl;
	return;
}
