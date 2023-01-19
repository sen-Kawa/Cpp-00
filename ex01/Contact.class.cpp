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
	getline(std::cin, first_name);
}

void	Contact::fill_last_name(void)
{
	std::cout << "Enter your last name" << std::endl;		
	getline(std::cin, last_name);
}

void	Contact::fill_nickname(void)
{
	std::cout << "Enter your nickname" << std::endl;		
	getline(std::cin, nickname);
}

void	Contact::fill_phone_number(void)
{
	std::cout << "Enter your phonenumber" << std::endl;		
	getline(std::cin, phone_number);
}

void	Contact::fill_darkest_secret(void)
{
	std::cout << "Enter your darkest secret" << std::endl;		
	getline(std::cin, darkest_secret);
}

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}
