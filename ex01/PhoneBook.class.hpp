#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include "Contact.class.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);
};

#endif
