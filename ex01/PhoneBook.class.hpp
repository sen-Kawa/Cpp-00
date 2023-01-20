#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

class PhoneBook
{
	private:
			
		Contact	contact[8];

		void display_header();

	public:

		int add_contact(int contact_count);
		void display_contacts();

		PhoneBook(void);
		~PhoneBook(void);
};

#endif
