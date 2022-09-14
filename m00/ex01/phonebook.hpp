
#ifndef H_PHONEBOOK
# define H_PHONEBOOK

class PhoneBook {
	public:
		Contact[9] contacts;
		void	addContact();
		void	searchContacts();
};

class Contact {
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		int			phone_number;
		std::string darkest_secret;
};

#endif