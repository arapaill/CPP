#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap	clapTrap("Clappy");
	ScavTrap	scavTrap("Scavvy");
		
	scavTrap.attack("Clappy");
	clapTrap.attack("Scavvy");
	scavTrap.guardGate();
	scavTrap.takeDamage(30);
	scavTrap.beRepaired(10);
	scavTrap.takeDamage(50);
	scavTrap.takeDamage(30);
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(1);
	scavTrap.attack("Clappy");
	return 0;
}