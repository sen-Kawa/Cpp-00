#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	action;
	int			contact_count;

	contact_count = 0;
	std::cout << "Welcome to your awesome phonebook!" << std::endl;
	while (action.compare("EXIT") != 0)
	{
		std::cout << "Enter one of the following options:\n- ADD\n- SEARCH\n- EXIT" << std::endl;
		getline(std::cin, action);
		if (action.compare("ADD") == 0)
		{
			std::cout << "Adding.." << std::endl;
			contact_count = phonebook.add_contact(contact_count);
		}
		if (action.compare("SEARCH") == 0)
		{
			std::cout << "Searching.." << std::endl;
		}
	}
	return (0);
}
