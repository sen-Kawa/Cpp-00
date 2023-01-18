#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	while (input.compare("EXIT") != 0)
	{
		std::cout << "Hi";
		getline(std::cin, input);
	}
	return (0);
}
