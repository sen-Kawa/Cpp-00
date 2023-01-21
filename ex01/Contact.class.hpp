#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

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
		std::string format_detail(std::string detail);

	public:

		void fill_contact(void);
		void print_list_contacts(int index);
		void print_contact(void);

		Contact(void);
		~Contact(void);
};

#endif
