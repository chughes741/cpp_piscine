

#ifndef M01_EX00_ZOMBIE_H_
# define M01_EX00_ZOMBIE_H_

# include <iostream>
# include <string>


class Zombie {
	private:
		std::string _name;

	public:
		Zombie( void );
		Zombie( std::string new_name );
		~Zombie();
		void setName( std::string name );
		std::string getName( void );
		void announce( void );
};


// Zombie generation functions
Zombie*    zombieHorde( int N, std::string name );


#endif // M01_EX00_ZOMBIE_H_
