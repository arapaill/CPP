
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FR4G-TP")
{
	_HP = 100;
	_EP = 100;
	_DPS = 30;
	std::cout << _name << ": Sarah Connor ?" << std::endl;  
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_HP = 100;
	_EP = 100;
	_DPS = 30;
	std::cout << name << ": Sarah Connor ?" << std::endl;  
}

FragTrap::FragTrap(FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	*this = fragTrap;
	std::cout << _name << ": Sarah Connor ?" << std::endl;  
}

FragTrap::~FragTrap(void)
{
	std::cout << _name << ": hasta la vista, baby" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
	if (this != &fragTrap)
	{
		this->_name = fragTrap._name;
		this->_HP = fragTrap._HP;
		this->_EP = fragTrap._EP;
		this->_DPS = fragTrap._DPS;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << _name << "hight five guys !" << std::endl;
}