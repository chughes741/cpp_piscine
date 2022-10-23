
#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>
# include <string>

// Class that contains contact information
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
		std::string getPhoneNumber();
		std::string getDarkestSecret();

	private:
		std::string first_name_;
		std::string last_name_;
		std::string nickname_;
		std::string	phone_number_;
		std::string darkest_secret_;
};

#endif // CONTACT_HPP_
