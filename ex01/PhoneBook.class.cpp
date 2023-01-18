#include "PhoneBook.class.hpp"

int	add_contact(int contact_count)
{
	contact[contact_count].fill_contact();	
	contact_count++;
	return (contact_count);
}

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}
