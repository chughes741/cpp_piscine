

#ifndef M01_EX03_HUMANB_H_
# define M01_EX03_HUMANB_H_

# include <string>

# include "Weapon.hpp"


class HumanB {
	private:
		std::string	name;
		Weapon		myweapon;
	public:
		HumanB( std::string newname );
		~HumanB();
		void attack( void );
};


#endif // M01_EX03_HUMANB_H_
