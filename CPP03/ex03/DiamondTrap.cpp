#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(DiamondTrap &diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap)
{
	*this = diamondTrap;
	std::cout << "It's alive !!!!!!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	_name = name;
	_HP = FragTrap::_HP;
	_EP = ScavTrap::_EP;
	_DPS = FragTrap::_DPS;
	std::cout << "It's alive !!!!!!" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "It's not alive anymore!!!!!!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	if (this != &diamondTrap)
	{
		this->_name = diamondTrap._name;
		this->_HP = diamondTrap._HP;
		this->_EP = diamondTrap._EP;
		this->_DPS = diamondTrap._DPS;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << _name << " and my clapName " << ClapTrap::_name << "!" << std::endl;
}