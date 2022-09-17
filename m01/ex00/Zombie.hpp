

#ifndef M01_EX00_ZOMBIE_H_
# define M01_EX00_ZOMBIE_H_

# include <iostream>
# include <string>


class Zombie {
	private:
		std::string name;

	public:
		Zombie( std::string new_name ) { name = new_name; }
		void announce( void );
};


// Zombie generation functions
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );


#endif // M01_EX00_ZOMBIE_H_
