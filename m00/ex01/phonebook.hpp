

#ifndef PHONEBOOK_H_
# define PHONEBOOK_H_

# include <iostream>
# include <string>
# include <iomanip>

# include "Contact.hpp"


class PhoneBook {
	public:
		PhoneBook( void );
		PhoneBook( const PhoneBook &phonebook);
		~PhoneBook();
		PhoneBook & operator = (const PhoneBook &phonebook);

		void	addContact();
		void	searchContacts();

	private:
		int		_n_contacts;
		Contact _contacts[8];
};


#endif // PHONEBOOK_H_
