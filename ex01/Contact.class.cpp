#include "Contact.class.hpp"

void	Contact::fill_contact(void)
{
	fill_first_name();
	fill_last_name();
	fill_nickname();
	fill_phone_number();
	fill_darkest_secret();
}

void	Contact::fill_first_name(void)
{
	std::cout << "Enter your first name" << std::endl;		
}

void	Contact::fill_last_name(void)
{
	std::cout << "Enter your last name" << std::endl;		
}

void	Contact::fill_nickname(void)
{
	std::cout << "Enter your nickname" << std::endl;		
}

void	Contact::fill_phone_number(void)
{
	std::cout << "Enter your phonenumber" << std::endl;		
}

void	Contact::fill_darkest_secret(void)
{
	std::cout << "Enter your darkest secret" << std::endl;		
}

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}
