

#include "HumanA.hpp"

#include <string>
#include <iostream>

#include "Weapon.hpp"


HumanA::HumanA( std::string newname, Weapon &newweapon ) : name(newname), myweapon(newweapon)  {
	return;
}

HumanA::~HumanA( void ) {
	return;
}

void HumanA::attack( void ) {
	std::cout	<< name << " attacks with their " 
				<< myweapon.getType() << std::endl;
	return;
}
