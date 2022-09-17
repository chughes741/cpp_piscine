

#ifndef M01_EX03_WEAPON_H_
# define M01_EX03_WEAPON_H_

# include <string>


class Weapon {
	private:
		std::string type;
	public:
		Weapon();
		~Weapon();
		const std::string&	getType( void );
		void 				setType( std::string newtype );
};


#endif // M01_EX03_WEAPON_H_