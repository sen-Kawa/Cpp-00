#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "Welcome to your awesome phonebook!" << std::endl;
	while (input.compare("EXIT") != 0)
	{
		std::cout << "Enter one of the following options:\n- ADD\n- SEARCH\n- EXIT" << std::endl;
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			std::cout << "Adding.." << std::endl;
		}
		if (input.compare("SEARCH") == 0)
		{
			std::cout << "Searching.." << std::endl;
		}
	}
	return (0);
}
