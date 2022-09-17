

#include "Zombie.hpp"

#include <string>


// Creates a statically allocated Zombie
void	randomChump( std::string name ) {

	Zombie chump = Zombie( name );
	chump.announce();

	return;
}
