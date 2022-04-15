#include "Iter.hpp"

int	main(void)
{
	int			arrayInt[5] = {0, 1, 2, 3, 4};
	std::string	arrayStr[5] = {"ZERO", "UN", "DEUX", "TROIS", "QUATRE"};
	const char	*arrayStrC[5] = {"POMME", "POIRE", "PECHE", "ANANAS", "MANGUE"};
	char		arrayChar[5] = {'A', 'L', 'E', 'X', '!'};

	iter<int>(arrayInt, 5, print);
	std::cout << std::endl;
	iter<int>(arrayInt, 2, print);
	std::cout << std::endl;

	iter<std::string>(arrayStr, 5, print);
	std::cout << std::endl;

	iter<const char *>(arrayStrC, 5, print);
	std::cout << std::endl;

	iter<char>(arrayChar, 5, print);
	std::cout << std::endl;

	return (0);
}
