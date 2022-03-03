#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(10), _EP(10), _DPS(0) 
{
	std::cout << "A Robot is born !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & src)
{
	std::cout << "A Robot is cloned !" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << ": AAAAAAAAARGGG !" << std::endl;
}

int ClapTrap::getHitPoints(void)
{
	return (_HP);
}
int ClapTrap::getEnergyPoints(void)
{
	return (_EP);
}

int ClapTrap::getAttackDamage(void)
{
	return (_DPS);
}

std::string	ClapTrap::getName(void)
{
	return (_name);
}

ClapTrap & ClapTrap::operator=(ClapTrap & rhs)
{
	_name = rhs.getName();
	_HP = rhs.getHitPoints();
	_EP = rhs.getEnergyPoints();
	_DPS = rhs.getAttackDamage();
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (_EP > 0 && _HP > 0)
	{
		std::cout	<< _name << ": take this !" << std::endl;
		std::cout	<< _name << " attacks " << target 
					<< std::endl;
		_EP -= 1;
	}
	else if (_EP <= 0)
		std::cout	<< _name << " has not enough energy to attack ! (" << _EP << ")" << std::endl;
 	else if (_HP <= 0)
		std::cout	<< _name << " has not enough hitpoint to attack ! (" << _HP << ")" << std::endl;

}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP > 0)
	{
		std::cout	<< _name <<  ": I am a robot ! I don't feel pai- AOUTCH !" << std::endl;
		std::cout	<< _name << " receive " << amount << " points of damage !"
					<< std::endl;
		_HP -= amount;
		if (_HP < 0)
			_HP = 0;
		if (_HP == 0)
			std::cout << _name << " Died in aweful robotic pain" << std::endl;
	}
	else
		std::cout << _name << " is already in the ClapTraps paradise" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EP > 0 && _HP > 0)
	{
		std::cout   << _name << ": Nothing duck tape can't fix !"<< std::endl;
		std::cout	<< _name << " repair himself + " 
					<< amount << std::endl;
		_HP += amount;
		_EP -= 1;
	}
	else if (_EP > 0)
		std::cout << _name << " is already in the ClapTrap paradise" << std::endl;
	else
		std::cout << _name << " No more ducktape..." << std::endl;
}