
#pragma once
#ifndef H_PHONEBOOK
# define H_PHONEBOOK

# include <iomanip>
# include <iostream>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_number;
		std::string darkest_secret;
	public:
		void	setFirstName();
		void	setLastName();
		void	setNickname();
		void	setPhoneNumber();
		void	setDarkestSecret();
		void	getFirstName();
		void	getLastName();
		void	getNickname();
};

class PhoneBook {
	private:
		int		n_contacts;
		Contact contacts[8];
	public:
		void	addContact();
		void	searchContacts();
};

#endif
