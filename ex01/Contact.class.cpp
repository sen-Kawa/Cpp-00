#include "Contact.class.hpp"
#include <iostream>
#include <string>

void	Contact::fill_contact(void)
{
	fill_first_name();
	fill_last_name();
	fill_nickname();
	fill_phone_number();
	fill_darkest_secret();
}

void	Contact::print_contact(int index)
{
	std::string	separator;

	separator = "|";
	std::cout
		<< std::right << separator
		<< std::setw(10) << index << separator
		<< std::setw(10) << format_detail(first_name) << separator
		<< std::setw(10) << format_detail(last_name) << separator
		<< std::setw(10) << format_detail(nickname) << separator
	<< std::endl;
}

std::string	Contact::format_detail(std::string detail)
{
	std::string	substracted;

	if (detail.length() <= 10)
		return (detail);
	else
	{
		substracted = detail.substr(0, 9);
		substracted += ".";
		return (substracted);
	}
}

void	Contact::fill_first_name(void)
{
	std::cout << "Enter your first name" << std::endl;		
	getline(std::cin, first_name);
	if (first_name.length() == 0)
	{
		std::cout << "Invalid empty field" << std::endl;
		fill_first_name();
	}
}

void	Contact::fill_last_name(void)
{
	std::cout << "Enter your last name" << std::endl;		
	getline(std::cin, last_name);
	if (last_name.length() == 0)
	{
		std::cout << "Invalid empty field" << std::endl;
		fill_last_name();
	}
}

void	Contact::fill_nickname(void)
{
	std::cout << "Enter your nickname" << std::endl;		
	getline(std::cin, nickname);
	if (nickname.length() == 0)
	{
		std::cout << "Invalid empty field" << std::endl;
		fill_nickname();
	}
}

void	Contact::fill_phone_number(void)
{
	std::cout << "Enter your phonenumber" << std::endl;		
	getline(std::cin, phone_number);
	if (phone_number.length() == 0)
	{
		std::cout << "Invalid empty field" << std::endl;
		fill_phone_number();
	}
}

void	Contact::fill_darkest_secret(void)
{
	std::cout << "Enter your darkest secret" << std::endl;		
	getline(std::cin, darkest_secret);
	if (darkest_secret.length() == 0)
	{
		std::cout << "Invalid empty field" << std::endl;
		fill_darkest_secret();
	}
}

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}
