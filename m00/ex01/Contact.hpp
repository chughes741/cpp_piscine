
#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>
# include <string>

class Contact {
	public:
		Contact( void );
		Contact( const Contact &contact );
		~Contact();
		Contact & operator = ( const Contact &contact );

		void		setFirstName();
		void		setLastName();
		void		setNickname();
		void		setPhoneNumber();
		void		setDarkestSecret();

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_number;
		std::string darkest_secret;		
};

#endif // CONTACT_HPP_
