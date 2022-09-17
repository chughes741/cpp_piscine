

#ifndef M01_EX05_HARL_H_
# define M01_EX05_HARL_H_

# include <string>

class Harl {
	public:
		Harl();
		Harl( const Harl &h);
		~Harl();
		Harl & operator = (const Harl &h);

		void complain( std::string level );

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif // M01_EX05_HARL_H_
