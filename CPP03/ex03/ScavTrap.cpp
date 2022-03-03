#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("SC4V-TP")
{
	_HP = 100;
	_EP = 50;
	_DPS = 20;
	std::cout << _name << ": reporting for duty !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_HP = 100;
	_EP = 50;
	_DPS = 20;
	std::cout << name << ": reporting for duty !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
    *this = scavTrap;
    std::cout << _name << ": reporting for duty !" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << ": Tell my wife.... wait I don't have a wife..." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap)
{
	if (this != &scavTrap)
	{
		this->_name = scavTrap._name;
		this->_HP = scavTrap._HP;
		this->_EP = scavTrap._EP;
		this->_DPS = scavTrap._DPS;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target) 
{
	if (_EP > 0 && _HP > 0)
	{
		std::cout	<< _name << ": Haayaaa" << std::endl;
		std::cout	<< _name << " attacks " << target 
					<< std::endl;
		_EP -= 1;
	}
	else if (_EP <= 0)
		std::cout	<< _name << " has not enough energy to attack ! (" << _EP << ")" << std::endl;
 	else if (_HP <= 0)
		std::cout	<< _name << " has not enough hitpoint to attack ! (" << _HP << ")" << std::endl;

}

void	ScavTrap::guardGate(void) const
{
    std::cout << _name << ": Gate keeper mode activated!" << std::endl;
}
