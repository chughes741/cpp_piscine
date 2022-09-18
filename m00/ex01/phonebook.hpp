

#ifndef PHONEBOOK_H_
# define PHONEBOOK_H_

# include <iostream>
# include <string>
# include <iomanip>


class Contact {
	public:
		Contact( void );
		Contact( const Contact &contact);
		~Contact();
		Contact & operator = (const Contact &contact);

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

class PhoneBook {
	public:
		PhoneBook( void );
		// PhoneBook(  );
		PhoneBook( const PhoneBook &phonebook);
		~PhoneBook();
		PhoneBook & operator = (const PhoneBook &phonebook);

		void	addContact();
		void	searchContacts();

	private:
		int		n_contacts;
		Contact contacts[8];
};


#endif // PHONEBOOK_H_
