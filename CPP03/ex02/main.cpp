#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	fragTrap("Arnold");
	ScavTrap	scavTrap("Sarah");
	
	scavTrap.attack("The Terminator");
	scavTrap.guardGate();
	fragTrap.attack("Sarah Connor");
	fragTrap.highFivesGuys();
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(30);
	fragTrap.takeDamage(80);
	return (0);
}