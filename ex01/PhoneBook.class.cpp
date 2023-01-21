#include "PhoneBook.class.hpp"
#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>

int	PhoneBook::add_contact(int contact_count)
{
	std::cout
		<< "Adding..."
	<< std::endl;
	contact[contact_count].fill_contact();	
	contact_count++;
	std::cout
		<< "Added succestfully!"
	<< std::endl;
	if (contact_count == 8)
	{
		contact_count = 0;
	}
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
		std::string	chosen = "0";
		int	index;

		PhoneBook::display_header();
		for (int i = 0; i < 8; i++)
		{
			contact[i].print_list_contacts(i);
		}
		std::cout
			<< "\nEnter the index of the contact to display"
		<< std::endl;
		std::getline(std::cin, chosen);
		if (chosen > "7" || chosen < "0")
		{
			std::cout
				<< "Non existing index, try with 0-7"
			<< std::endl;
			display_contacts();
		}
		else
		{
			std::istringstream(chosen) >> index;
			contact[index].print_contact();
		}
}

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}
