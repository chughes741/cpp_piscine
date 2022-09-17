

#ifndef M01_EX03_HUMANA_H_
# define M01_EX03_HUMANA_H_

# include <string>

# include "Weapon.hpp"


class HumanA {
	private:
		std::string	name;
		Weapon&		myweapon;
	public:
		HumanA( std::string newname, Weapon &newweapon );
		~HumanA();
		void attack( void );
};


#endif // M01_EX03_HUMANA_H_
