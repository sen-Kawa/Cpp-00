#include "Contact.class.hpp"

void	fill_contact(void)
{
	fill_first_name();
	fill_last_name();
	fill_nickname();
	fill_phonenumber();
	fill_darkest_secret();
}

void	fill_first_name(void)
{
	std::cout << "Enter your first name" << std::endl;		
}

void	fill_last_name(void)
{
	std::cout << "Enter your last name" << std::endl;		
}

void	fill_nickname(void)
{
	std::cout << "Enter your nickname" << std::endl;		
}

void	fill_phonenumber(void)
{
	std::cout << "Enter your phonenumber" << std::endl;		
}

void	fill_darkest_secret(void)
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
