#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact
{
	private:

		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

		void fill_first_name(void);
		void fill_last_name(void);
		void fill_nickname(void);
		void fill_phone_number(void);
		void fill_darkest_secret(void);

	public:

		void fill_contact(void);

		Contact(void);
		~Contact(void);
};

#endif
