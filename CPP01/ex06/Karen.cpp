#include "Karen.hpp"

Karen::Karen()
{
	return ;
}

Karen::~Karen()
{
	return ;
}

void	Karen::debug(void) 
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

int	getLevel(std::string level)
{
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					levelNumber = 4;

	for (int i = 0; i < 4 && levelNumber == 4; i++)
	{
		if (level == levels[i])
			levelNumber = i;
	}
	return (levelNumber);
}

void	Karen::complain(std::string level)
{
	p_function	complains[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int					levelNumber = getLevel(level);

	if (levelNumber < 4)
		(this->*(complains[levelNumber]))();
	else
		std::cout << "Invalid level. Try again." << std::endl << std::endl;
}