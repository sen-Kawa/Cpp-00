#include "PhoneBook.class.hpp"
#include <iomanip>
#include <ios>
#include <ostream>
#include <string>

int	PhoneBook::add_contact(int contact_count)
{
	contact[contact_count].fill_contact();	
	contact_count++;
	return (contact_count);
}

void	PhoneBook::display_header()
{
	std::string	title;
	std::string	separator;
	std::string	headers[4];

	title = "\nThe current contacts in your phonebook are:\n\n";
	separator = "|";
	headers[0] = "INDEX";
	headers[1] = "FIRST NAME";
	headers[2] = "LAST NAME";
	headers[3] = "NICKNAME";
	std::cout 
			<< std::left << title
			<< std::right << separator 
			<< std::setw(10) << headers[0] << separator
			<< std::setw(10) << headers[1] << separator
			<< std::setw(10) << headers[2] << separator
			<< std::setw(10) << headers[3] << separator
	<< std::endl;
}

void	PhoneBook::display_contacts()
{
		PhoneBook::display_header();
}

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}
