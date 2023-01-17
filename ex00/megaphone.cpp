#include <iostream>

int	main(int argc, char **argv)
{
	int	word_iterator;
	int	letter_iterator;

	word_iterator = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (word_iterator < argc)
	{
		letter_iterator = 0;
		while (argv[word_iterator][letter_iterator])
		{
			std::cout << (char)toupper(argv[word_iterator][letter_iterator]);
			letter_iterator++;
		}
		word_iterator++;
	}
	std::cout << std::endl;
	return (0);
}
